#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long gcd_efficient(int number1, int number2)
{
  if(number2 == 0){
		return number1;
	}
	long long number1_reminder = number1 % number2;
	return gcd_efficient(number2, number1_reminder);
}


long long lcm_fast(long long a, long long b) {
  return (a * b) / (gcd_efficient(a,b));
}


int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
