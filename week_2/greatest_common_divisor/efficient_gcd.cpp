#include <iostream>

long int efficient_gcd(long int number1, long int number2){
	if(number2 == 0){
		return number1;
	}
	long int number1_reminder = number1 % number2;
	return efficient_gcd(number2, number1_reminder);
}



int main(void){
	long int a = 5000;
	long int b = 9000;
	std::cout<<"Greatest Common Divisor of "<< a << " and " << b << " ==> " << efficient_gcd(a,b)<< "\n";
	return 0;
}
