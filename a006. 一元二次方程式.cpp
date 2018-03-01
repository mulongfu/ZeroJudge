#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	while (cin >> a >> b >> c) {
		int flag = 0, x1 = 0, x2 = 0;
		flag = (b * b) - 4 * a * c;
		if (flag > 0) {
			x1 = ((-b) + sqrt((b * b) - 4 * a * c)) / 2 * a;
			x2 = ((-b) - sqrt((b * b) - 4 * a * c)) / 2 * a;
			if (x2 > x1) {
				int temp = 0;
				x2 = temp;
				x1 = x2;
				x2 = x1;
			}
			printf("Two different roots x1=%d , x2=%d\n", x1, x2);
		}
		else if (flag == 0) {
			x1 = ((-b)) / (2 * a);			
			printf("Two same roots x=%d\n", x1);
		}
		else {
			printf("No real root\n");
		}
	}
	return 0;
}