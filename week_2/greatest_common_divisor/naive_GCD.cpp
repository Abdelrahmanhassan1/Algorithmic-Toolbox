#include <iostream>

long int  naive_gcd(long int number1, long int number2){
	long int gcd = 0;
	for(long int i = 1; i < (number1 + number2); i++){
		if ((number1%i == 0) && (number2%i == 0)){
			gcd = i;
		}
	}
	return gcd;
}

int main(void){
	int a = 2500;
	int b = 1000;
	std::cout<<"Greatest Common Divisor of "<< a << " and " << b << " ==> " << naive_gcd(a,b)<< "\n";
	return 0;
}

