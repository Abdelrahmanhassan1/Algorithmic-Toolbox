#include <iostream>
#include <vector>

// The Algotithm wants just to store the last digit of each number we get from the algorithm
// Then this number is treated as the new number to push in the array 
// so that the final array will just contain numbers from 0 -> 9

int get_fibonacci_last_digit_naive(int n) {
    if(n == 0)
		return 0;
	std::vector<int>numbers;
	numbers.push_back(0);
	numbers.push_back(1);
	for(int i = 2; i <= n; i++){
	       numbers.push_back((numbers[i-1] + numbers[i-2]) % 10);
	}
	return numbers[n];

}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
