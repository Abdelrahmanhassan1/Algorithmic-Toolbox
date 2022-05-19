#include <iostream>

int sum_of_two_digits(int digit1, int digit2){
    return digit1 + digit2;
}

int main(void){
    int a = 0;
    int b = 0;

    std::cin>>a;
    std::cin>>b;
    std::cout<<sum_of_two_digits(a, b);
    std::cout<<"\n";
    return 0;
}