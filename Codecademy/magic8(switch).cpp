//switch
#include <iostream>
#include <stdlib.h>
int main(){
  
  std::cout <<"MAGIC 8-BALL: \n\n"; 
  
  srand(time(NULL));
  int answer = rand()%20;
  std::cout <<answer;
  
  switch(answer){
    case 0:
    std::cout <<"It is certain.\n";
    break;
      
  case 1:
    std::cout <<".\n";
    break;
  
  case 2:
    std::cout <<".\n";
    break;
  
  case 3:
    std::cout <<".\n";
    break;
  
  case 4:
    std::cout <<".\n";
    break;
  
  case 5:
    std::cout <<".\n";
    break;
  
  case 6:
    std::cout <<".\n";
    break;
  
  case 7:
    std::cout <<".\n";
    break;
  
  case 8:
    std::cout <<".\n";
    break;
  
  case 9:
    std::cout <<".\n";
    break;
  
  case 10:
    std::cout <<".\n";
    break;
  
  case 11:
    std::cout <<".\n";
    break;
  
  case 12:
    std::cout <<".\n";
    break;
  
  case 13:
    std::cout <<".\n";
    break;
  
  case 14:
    std::cout <<".\n";
    break;
  
  case 15:
    std::cout <<".\n";
    break;
  
  case 16:
    std::cout <<".\n";
    break;
  
  case 17:
    std::cout <<".\n";
    break;
  
  case 18:
    std::cout <<".\n";
    break;
  
  case 19:
    std::cout <<".\n";
    break;
  
  default:
    std::cout <<"Very doubtful.\n";
    break;
}
//just missing statements for random choices  
 
}

