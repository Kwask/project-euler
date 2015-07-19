#include <iostream>
#include <set>

int main()
{
  std::set<int> multipliers;
  std::set<int> multiples;

  multipliers.emplace( 3 );
  multipliers.emplace( 5 );

  for( std::set<int>::iterator it = multipliers.begin(); it != multipliers.end(); ++it )
  {
    int multiplier = *it;
    int multiple = multiplier;
    int i = 1;

    while( multiple < 1000 )
    {
      multiples.emplace( multiple );
      multiple = i*multiplier;
      i++;
    }
  }

  int sum = 0;

  for( std::set<int>::iterator it = multiples.begin(); it != multiples.end(); ++it )
  {
    sum += *it;
  }

  std::cout << "The sum is " << sum << "!" << std::endl;
}
