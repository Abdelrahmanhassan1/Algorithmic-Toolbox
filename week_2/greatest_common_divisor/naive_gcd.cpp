#include <iostream>
#include "naive_gcd.h"


int main(void){
	int a = 2500;
	int b = 1000;
	std::cout<<"Greatest Common Divisor of "<< a << " and " << b << " ==> " << naive_gcd(a,b)<< "\n";
	return 0;
}

