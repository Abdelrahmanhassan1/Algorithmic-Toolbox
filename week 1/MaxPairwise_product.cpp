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

long long fast_maxpair_product(const std::vector<int>& numbers){
    long long product = 0;
    int max_index1 = -1;
    int n = numbers.size();
    for(int i = 0; i  < n ; i++){
        if(numbers[i]> numbers[max_index1]){
            max_index1 = i;
        }
    }
    int max_index2 = -1;
    for(int j = 0; j < n ; j ++){
        if((numbers[j] > numbers[max_index2]) && (j != max_index1) ){
            max_index2 = j;
        }
    }
    product = (long long)numbers[max_index1] * numbers[max_index2];
    return product; 
    
}



int main(){

    int n;
    std::cin >> n;
    std::vector<int>numbers(n);
    for(int i = 0; i< n; i++){
        std::cin >> numbers[i];
    }
    // std::cout<< naive_maxpair_product(numbers) << "\n";
    std::cout<< fast_maxpair_product(numbers) << "\n";
    return 0;

}

// // stress test 
// int main(){
//     while (true){
//         int n;
//         n = rand() % 1000 + 2;
//         std::cout << n << "\n";
//         std::vector<int>rand_numbers;
//         for (int k = 0; k < n; k++){
//             rand_numbers.push_back(rand()% 10000);
//         }
//         for (int k = 0; k < n; k++){
//             std::cout << rand_numbers[k] << " ";
//         }
//         std::cout << "\n";
//         long long result1 = naive_maxpair_product(rand_numbers);
//         long long result2 = fast_maxpair_product(rand_numbers);
//         if(result1 == result2){
//             std::cout<<"OK \n";
//         }else{
//             std::cout<<"Wrong result:" << result1 << " " << result2 << "\n";
//             break;
//         }
//     }
//     return 0;
// }