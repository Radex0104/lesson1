#include<iostream>
int summ(int a, int b)
{
  return a + b;
}
int main()
{
  assert(summ(5, 5) == 5);
  std::cout << "Hello world!" << std::endl;
}
