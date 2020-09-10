#include "old-apply.hpp"
#include <functional>
#include <iostream>

int main()
{
  using namespace cpp;
  function<void(int, int, int)> f = [](const int& a, float b, int c)
  {
    cout << 3*(a*a) + 2 * b + c << endl;
  };
  tuple<int, int, int> a(1, 2, 3);
  tuple<int, int, int> b(4, 5, 6);
  tuple<int, int, int> c(7, 8, 9);
  tuple<int, int, int> d(10, 11, 12);

  apply(f, a);
  apply(f, b);
  apply(f, c);
  apply(f, d);

  return 0;
}
