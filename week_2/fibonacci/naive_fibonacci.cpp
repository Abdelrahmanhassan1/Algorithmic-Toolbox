#include <iostream>

//recursive approach

long long naive_fibonacci(int number){
	if(number <= 1){
		return number;
	}
    return (naive_fibonacci(number-1) + naive_fibonacci(number-2));
    
}

int main(void){
	for(int i = 0; i < 40; i++){
		std::cout<<"fibonacci for "<< i << "=>"<<naive_fibonacci(i)<<"\n";
	}
    return 0;
}

