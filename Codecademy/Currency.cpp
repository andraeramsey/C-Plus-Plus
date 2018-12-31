//currency conversion
#include <iostream>

int main() 
{
  //Peso
  //Quetzals
  //Colóns
  double p, q, c;
  double dollars;
  
  /*p=dollars*0.050;
  q=dollars*0.13;
  c=dollars*0.0017;*/
  dollars=p*.050+q*.13+c*.0017;
  
  std::cout << "Enter number of Mexican Pesos: ";
  std::cin >>p;
  std::cout << "Enter number of Guatemalan Quetzals: ";
  std::cin >>p;
  std::cout << "Enter number of Salvadoran Colóns: ";
  std::cin >>c;
  
  std::cout <<"US Dollars = $"<<dollars <<"\n";  
}
