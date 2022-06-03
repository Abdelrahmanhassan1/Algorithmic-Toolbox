#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search_iterative(const vector<int> &a, int x)
{
  int left = 0, right = a.size() - 1;
  while (left <= right)
  {
    int mid = left + ((right - left) / 2);
    if (x == a[mid])
    {
      return mid;
    }
    else if (x < a[mid])
    {
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return -1;
}

int main()
{
  // std::cout<<"Note first Array should be sorted \n";
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i)
  {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i)
  {
    // replace with the call to binary_search when implemented
    std::cout << binary_search_iterative(a, b[i]) << ' ';
  }
}
