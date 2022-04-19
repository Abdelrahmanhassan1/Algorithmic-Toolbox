#include <iostream>
#include "efficient_gcd.h"

int main(void){
	long int a = 8500;
	long int b = 9000;
	std::cout<<"Greatest Common Divisor of "<< a << " and " << b << " ==> " << efficient_gcd(a,b)<< "\n";
	return 0;
}
