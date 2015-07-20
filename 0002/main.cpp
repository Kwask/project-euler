#include <iostream>

int fib_sum(
  unsigned long max_index_size = 4000000,
  unsigned int multiple = 2 )
{
  unsigned long long fibo[3] = {0, 1, 1};
  unsigned long long sum = 0;

  while( fibo[2] < max_index_size )
  {
    if( !( fibo[2]%multiple ))
    {
      sum += fibo[2];
    }

    fibo[2] = fibo[1]+fibo[0];
    fibo[1] = fibo[0];
    fibo[0] = fibo[2];
  }

  return sum;
}

int main()
{
  std::cout << fib_sum() << std::endl;
}
