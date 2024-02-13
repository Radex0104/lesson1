#include<iostream>
int summ(int a, int b)
{
  return a + b;
}
int main()
{
  assert(summ(5, 5) == 10);
  std::cout << "Hello world!" << std::endl;
}
