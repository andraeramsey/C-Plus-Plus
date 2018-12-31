//dog years (hard coded dog name)
#include <iostream>

int main() 
{
  int dog_age=5;
  //The first two years of a dog's life count as 21 human years.
  int early_years=21;
  //Each following year counts as 4 human years.
  int later_years=(dog_age-2)*4;
  //dog's age in human years
  int human_years=early_years+later_years;
  
  std::cout <<"My name is Ollie! " <<" Ruff ruff, I am " <<human_years <<" years on in human years.";   
}
