#include <iostream>
#include <string> 

using namespace std;

int main() {
	string number;
	while (cin >> number) {
		int judge = 0, english = 0, other = 0;
		switch (number[0]) {
		case 'A':
			english = 1;
			break;
		case 'B':
			english = 10;
			break;
		case 'C':
			english = 19;
			break;
		case 'D':
			english = 28;
			break;
		case 'E':
			english = 37;
			break;
		case 'F':
			english = 46;
			break;
		case 'G':
			english = 55;
			break;
		case 'H':
			english = 64;
			break;
		case 'I':
			english = 39;
			break;
		case 'J':
			english = 73;
			break;
		case 'K':
			english = 82;
			break;
		case 'L':
			english = 2;
			break;
		case 'M':
			english = 11;
			break;
		case 'N':
			english = 20;
			break;
		case 'O':
			english = 48;
			break;
		case 'P':
			english = 29;
			break;
		case 'Q':
			english = 38;
			break;
		case 'R':
			english = 47;
			break;
		case 'S':
			english = 56;
			break;
		case 'T':
			english = 65;
			break;
		case 'U':
			english = 74;
			break;
		case 'V':
			english = 83;
			break;
		case 'W':
			english = 21;
			break;
		case 'X':
			english = 3;
			break;
		case 'Y':
			english = 12;
			break;
		case 'Z':
			english = 30;
			break;
		}
				
		for (int i = 8, ite = 1; i >= 1; i--, ite++) {
			other = other +  ite * (number[i]-'0');			
		}		
		
		judge = english + number[9]-'0' + other;

		if (judge % 10 == 0)
			cout << "real" << endl;
		else
			cout << "fake" << endl;
	}
	
	return 0;
}