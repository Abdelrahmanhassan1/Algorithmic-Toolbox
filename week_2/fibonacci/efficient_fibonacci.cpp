#include <iostream>
#include <vector>

long long efficient_fibonacci(int number){
	if(number == 0)
		return 0;
	std::vector<long long>numbers;
	numbers.push_back(0);
	numbers.push_back(1);
	for(int i = 2; i <= number; i++){
	       numbers.push_back(numbers[i-1] + numbers[i-2]);
	}
	return numbers[number];
}

int main(void){
	for(int j = 0; j < 100; j++){
		std::cout<<"Fibonacci of " << j << "=>" << efficient_fibonacci(j) << "\n";
	}
	return 0;
}

