#include <iostream>

long int efficient_gcd(long int number1, long int number2){
	if(number2 == 0){
		return number1;
	}
	long int number1_reminder = number1 % number2;
	return efficient_gcd(number2, number1_reminder);
}