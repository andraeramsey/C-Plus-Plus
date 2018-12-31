#include <iostream>

int main() {
  double earth_weight;
  int choice;
  double venus_g, mars_g, jupiter_g, saturn_g, uranus_g, neptune_g;
  
  double venus_g=earth_weight*.78;
  double mars_g=earth_weight*.39;
  double jupiter_g=earth_weight*2.65;
  double saturn_g=earth_weight*1.17;
  double uranus_g=earth_weight*1.05;
  double neptune_g=earth_weight*1.23;
  
  std::cout << "What is your weight ? ";
  std::cin >>earth_weight;
  std::cout << "What planet do you want to fight on?";
  std::cin >> choice;
  
  switch(choice){
    case 1:
      std::cout <<"Your weight on Venus: "<< venus_g <<"\n";
      break;
    case 2:
      std::cout <<"Your weight on Mars: "<< mars_g <<"\n";
      break;
    case 3:
      std::cout <<"Your weight on Jupiter: "<< jupiter_g <<"\n";
      break;
    case 4:
      std::cout <<"Your weight on Saturn: "<< saturn_g <<"\n";
      break;
    case 5:
      std::cout <<"Your weight on Uranus:  "<< uranus_g <<"\n";
      break;
    case 6:
      std::cout <<"Your weight on Neptune: "<< neptune_g <<"\n";
      break;
    default:
      std::cout <<"Please choose a number between 1 and 6\n";
      break;
  } 
}
