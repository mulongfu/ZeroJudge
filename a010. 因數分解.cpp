#include <iostream>

int main() {
	int n = 0, i;
	while (std::cin >> n) {
		i = 2;
		while (n > 1) {
			int counter = 0;
			while (n % i == 0) {	
				n /= i;
				counter++;				
			}
			if (counter > 1)
				if(n != 1)	
					std::cout << i << "^" << counter << " " << "*" << " ";
				else	
					std::cout << i << "^" << counter;
			else if(counter !=0)
				if (n == 1) 
					std::cout << i;
				else 
					std::cout << i << " " << "*" << " ";
			i++;
		}	std::cout << std::endl;
	}	
	return 0;
}