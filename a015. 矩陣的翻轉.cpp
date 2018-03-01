#include <iostream>

using namespace std;

int main() {
	int a, b;
	int matrix[100][100]; //	1~99
	while (cin >> a >> b) {
		for (int i = 1; i <= a; i++)
			for (int j = 1; j <= b; j++)
				cin >> matrix[i][j];
		for (int i = 1; i <= b; i++) {
			for (int j = 1; j <= a; j++) {
				cout << matrix[j][i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}