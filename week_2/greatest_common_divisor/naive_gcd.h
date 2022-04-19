#include <iostream>

long int  naive_gcd(long int number1, long int number2){
	long int gcd = 0;
    
    if(number1 == 0){
        return number2;
    }else if (number2 == 0){
        return number1;
    }
	
    for(long int i = 1; i < (number1 + number2); i++){
		if ((number1%i == 0) && (number2%i == 0)){
			gcd = i;
		}
	}
	return gcd;
}