#include <iostream>
#include <vector>

int get_fibonacci_last_digit_naive(int n) {
    if(n == 0)
		return 0;
	std::vector<int>numbers;
	numbers.push_back(0);
	numbers.push_back(1);
	for(int i = 2; i <= n; i++){
	       numbers.push_back(numbers[i-1] + numbers[i-2]);
	}
	return numbers[n] % 10;

}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
