#include<iostream>
#include <cassert>
int summ(int a, int b)
{
  return a + b;
}
void WrongAnswer()
{
  std::cout << "wrong";
  assert(summ(5,5 == 5));
}
void RightAnswer()
{
  std::cout << "succesful";
  assert(summ(5,5 == 10));
}
int main()
{
  WrongAnswer();
  RightAnswer();
}
