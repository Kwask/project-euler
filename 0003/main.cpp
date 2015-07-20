#include <iostream>
#include <vector>
#include <cstdint>

bool isPrime( std::vector<uint64_t> &primes, uint64_t num = 0 )
{
  for( std::vector<uint64_t>::iterator it = primes.begin();
       it != primes.end() && *it <= num;
       ++it )
  {
    if( num%(*it) == 0 )
    {
      return false;
    }
  }

  return true;
}

int main()
{
  std::vector<uint64_t> primes;
  primes.push_back( 2 );

  uint64_t max = 600851475143;
  uint64_t largest_prime = 1;

  std::cout << max << std::endl;

  for( uint64_t i = 2; i < max; i++ )
  {
    if( isPrime( primes, i ))
    {
      primes.push_back( i );
      //std::cout << "Added prime number: " << primes.back() << std::endl;
      if( max%i == 0 )
      {
        largest_prime = primes.back();
        std::cout << "The new largest prime is: " << largest_prime << std::endl
                  << "Primes is " << primes.size() << " large" << std::endl; 
      }
    }
  }

  std::cout << "The absolute largest prime is: " << largest_prime << std::endl;
}
