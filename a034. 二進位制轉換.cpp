#include <iostream>
#include <vector>
using namespace std;
#define _HAS_ITERATOR_DEBUGGING 0
int main() {
	int n = 0;
	while (cin >> n) {		
		vector<int> ar;
		int i = 0;
		int temp = 0;
		temp = n;
		while (temp != 1) {
			ar.push_back(temp % 2);
			temp = temp / 2;
			i++;
		}
		if (temp == 1)
			ar.push_back(temp);

		for (auto j = ar.end() - 1; j !=ar.begin(); j--)
			cout << *j;
		cout << *ar.begin() << endl;
	}	
	return 0;
}