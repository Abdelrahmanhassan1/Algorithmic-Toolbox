#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

int get_majority_element_fast(std::vector<int> &a, int left, int right)
{
  // like dictionary in python
  std::map<int, int> occurence;
  for (int i = left; i <= right; i++)
  {
    occurence[a[i]]++;
  }
  // check the value that is larger than n/2
  int length = a.size();
  for (int i = left; i <= right; i++)
  {
    if (occurence[a[i]] > length / 2)
    {
      return 1;
    }
  }
  return -1;
}

int main()
{
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i)
  {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element_fast(a, 0, a.size()) != -1) << '\n';
}
