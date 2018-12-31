#include <iostream>

int main() {
  
  double height, weight, bmi;
  double bmi=weight/height*height;
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  // Now ask the user for their weight and calculate BMI
  
  
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;

  return 0;
}
