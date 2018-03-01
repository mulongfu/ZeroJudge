#include <iostream>
#include <string>

/*
	I =	1
	V =	5
	X =	10
	L =	50
	C =	100
	D =	500
	M =	1,000

	1000,	900,	500,	400,	100,	90,	50,	40,	10,	9,	5,	4,	1
	M,		CM,		D,		CD,		C,		XC,	L,	XL,	X,	XI,	V,	IV,	I
*/

using namespace std;

int RomaToNum(string s1) {
	int output = 0;
	for (unsigned i = 0; i < s1.length(); i++) {
		switch (s1[i]) {

		case 'I':
			output++;
			break;

		case 'V':
			output += 5;
			if (i >= 1 && s1[i - 1] == 'I')
				output -= 2;
			break;

		case 'X':
			output += 10;
			if (i >= 1 && s1[i - 1] == 'I')
				output -= 2;
			break;

		case 'L':
			output += 50;
			if (i >= 1 && s1[i - 1] == 'X')
				output -= 20;
			break;

		case 'C':
			output += 100;
			if (i >= 1 && s1[i - 1] == 'X')
				output -= 20;
			break;

		case 'D':
			output += 500;
			if (i >= 1 && s1[i - 1] == 'C')
				output -= 200;
			break;

		case 'M':
			output += 1000;
			if (i >= 1 && s1[i - 1] == 'C')
				output -= 200;
			break;

		default:
			break;
		}
	}
	return output;
}

string NumToRoma(int value) {
	string output = "";
	while (value > 0) {
		if (value >= 1000) {
			output += "M";
			value -= 1000;
		}
		else if (value >= 900) {
			output += "CM";
			value -= 900;
		}
		else if (value >= 500) {
			output += "D";
			value -= 500;
		}
		else if (value >= 400) {
			output += "CD";
			value -= 400;
		}
		else if (value >= 100) {
			output += "C";
			value -= 100;
		}
		else if (value >= 90) {
			output += "XC";
			value -= 90;
		}
		else if (value >= 50) {
			output += "L";
			value -= 50;
		}
		else if (value >= 40) {
			output += "XL";
			value -= 40;
		}
		else if (value >= 10) {
			output += "X";
			value -= 10;
		}
		else if (value >= 9) {
			output += "IX";
			value -= 9;
		}
		else if (value >= 5) {
			output += "V";
			value -= 5;
		}

		else if (value >= 4) {
			output += "IV";
			value -= 4;
		}
		else if (value >=1){
			output += "I";
			value--;
		}
	}
	return output;
}

int main() {
	string s1, s2;
	while (cin >> s1) {
		if (s1 == "#")
			return 0;
		else
			cin >> s2;
		if (s1 == s2)
			cout << "ZERO" << endl;
		
		else
			cout << NumToRoma(abs(RomaToNum(s1) - RomaToNum(s2))) << endl;
		
	}
	return 0;
}