#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;	
	int offset = 7;
	while (cin >> s) {
		for (int i = 0; i < s.length(); i++) {
			string temp;
			temp =  (int)s[i] - 7;
			cout << temp;
		}
		cout << endl;
	}
	return 0;
}