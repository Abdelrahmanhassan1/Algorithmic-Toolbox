#include <iostream>
#include "naive_gcd.h"
#include "efficient_gcd.h"

int main(void){

    while(true){
        long int a = rand() % 10000;
        long int b = rand() % 10000;
        std::cout << a << " , " << b << "\n";
        if(naive_gcd(a,b) == efficient_gcd(a,b)){
            std::cout << "Ok \n"; 
        }else{
            std::cout << "Wrong Answer \n";
            std::cout << "Naive: " << naive_gcd(a,b) << " Efficient " << efficient_gcd(a,b) << "\n";
            break;
        }
    }
    return 0;
}




