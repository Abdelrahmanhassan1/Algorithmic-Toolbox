#include <iostream>
#include <vector>
#include <algorithm>

long long naive_maxpair_product(const std::vector<int>& numbers){
    long long max_product = 0;
    int n = numbers.size();
    for(int i = 0 ; i < n; i++){
        for(int j = i + 1 ; j < n ; j++){
            if ((numbers[i] * numbers[j]) > max_product){
                max_product = numbers[i] * numbers[j];
            }
        }
    }
    return max_product;
}



int main(){

    int n;
    std::cin >> n;
    std::vector<int>numbers(n);
    for(int i = 0; i< n; i++){
        std::cin >> numbers[i];
    }
    std::cout<< naive_maxpair_product(numbers) << "\n";
    return 0;

}