#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, flag;
	while (cin >> n) {
		int a[20] = {0};
		for (int i = 0; i < n; i++) {
			cin >> a[0] >> a[1] >> a[2] >> a[3];
			if ((a[1] - a[0]) == (a[2] - a[1])) {
				flag = a[1] - a[0];
				cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[0] + 4 * flag << endl;
			}
			else if ((a[1] / a[0]) == (a[2] / a[1])) {
				flag = a[1] / a[0];
				cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[0] * pow(flag, 4) << endl;
			}
		}
	}
	return 0;
}