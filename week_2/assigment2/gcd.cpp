#include <iostream>

int gcd_naive(int number1, int number2) {
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

int gcd_efficient(int number1, int number2)
{
  if(number2 == 0){
		return number1;
	}
	long int number1_reminder = number1 % number2;
	return gcd_efficient(number2, number1_reminder);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_efficient(a, b) << std::endl;
  return 0;
}
