#include <iostream>

using namespace std;

int gcd(int m, int n) {
	if (n == 0)
		return m;
	else
		return gcd(n, m%n);
}

int main() {
	int m, n;
	while (cin >> m >> n) {
		int result = gcd(m,n);
		cout << result << endl;
	}
	return 0;
}