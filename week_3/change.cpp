#include <iostream>

int get_cents(int money)
{
  return money % 1;
}
int get_nickel(int money)
{
  int coins = money / 5;
  return money % 5;
}

int get_change(int m)
{
  int coins[3] = {1, 5, 10};
  int number_of_coins = 0;

  // get dimes
  number_of_coins += m / 10;
  m = m % 10;
  // get nickels
  number_of_coins += m / 5;
  m = m % 5;
  // get cents
  number_of_coins += m / 1;

  return number_of_coins;
}

int main()
{
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
