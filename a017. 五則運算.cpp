#include <iostream>
#include <string>
#include <stack>
using namespace std;

int priority(char s) {
	switch (s) {
	case '+':
		return 1;
		break;
	case '-':
		return 2;
		break;
	case '*':
		return 3;
		break;
	case '/':
		return 4;
		break;
	case '%':
		return 5;
		break;
	default:
		return 0;
		break;
	}
}

int main() {
	stack<char> s;
	string in, post;
	while (getline(cin, in)) {
		for (int i = 0; i < in.length(); i++) {
			if (in[i] == ' ')
				continue;
			else if (isdigit(in[i])) {
				while (i < in.length() && isdigit(in[i])) {
					post += in[i];
					i++;
				}
				//i--;
				post += ' ';
			}
			else {
				switch (in[i]) {
				case '(':
					s.push(in[i]);
					break;
				case '+':
				case '-':
				case '*':
				case '/':
				case '%':
					while (!s.empty() && priority(s.top()) > priority(in[i])) {
						post += s.top();
						s.pop();
					}
					s.push(in[i]);
					break;
				case ')':
					while (!s.empty() && s.top() != '(') {
						post += s.top();
						s.pop();
					}
					s.pop();
					break;
				default:
					break;
				}
			}
		}
		while (!s.empty()) {
			post += s.top();
			s.pop();
		}

		//calc postfix
		long long answer = 0, a = 0, b = 0;
		stack<long long> t;
		for (int i = 0; i < post.length(); i++) {
			if (post[i] == ' ')
				continue;
			else if (isdigit(post[i])) {
				string temp;
				while (i < post.length() && isdigit(post[i])) {
					temp += post[i];
					i++;
				}					
				t.push(stoi(temp));
			}

			else {
				switch (post[i]) {

				case '+':
					b = t.top();
					t.pop();
					a = t.top();
					t.pop();
					t.push(a + b);
					break;

				case '-':
					b = t.top();
					t.pop();
					a = t.top();
					t.pop();
					t.push(a - b);
					break;

				case '*':
					b = t.top();
					t.pop();
					a = t.top();
					t.pop();
					t.push(a * b);
					break;

				case '/':
					b = t.top();
					t.pop();
					a = t.top();
					t.pop();
					if (b == 0)
						return 0;
					else {
						t.push(a / b);
					}
					break;

				case '%':
					b = t.top();
					t.pop();
					a = t.top();
					t.pop();
					t.push(a % b);
					break;

				default:
					break;
				}
			}
		}
		//cout << post;
		answer = t.top();
		std::cout << answer << endl;
	}
}