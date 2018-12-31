///if else
#include <iostream>
#include <stdlib.h>
int main(){
  
  std::cout <<"MAGIC 8-BALL: \n\n"; 
  
  srand(time(NULL));
  int answer = rand()%20;
  //comment out when statements added
  std::cout <<answer;
  
  if(answer==0){
    std::cout <<"It is certain.\n";
  }
  else if(answer==1){
    std::cout <<".\n";
  }
  else if(answer==2){
    std::cout <<".\n";
  }
  else if(answer==3){
    std::cout <<".\n";
  }
  else if(answer==4){
    std::cout <<".\n";
  }
  else if(answer==5){
    std::cout <<".\n";
  }
  else if(answer==6){
    std::cout <<".\n";
  }
  else if(answer==7){
    std::cout <<".\n";
  }
  else if(answer==8){
    std::cout <<".\n";
  }
  else if(answer==9){
    std::cout <<".\n";
  }
  else if(answer==10){
    std::cout <<".\n";
  }
  else if(answer==11){
    std::cout <<".\n";
  }
  else if(answer==12){
    std::cout <<".\n";
  }
  else if(answer==13){
    std::cout <<".\n";
  }
  else if(answer==14){
    std::cout <<".\n";
  }
  else if(answer==15){
    std::cout <<".\n";
  }
  else if(answer==16){
    std::cout <<".\n";
  }
  else if(answer==17){
    std::cout <<".\n";
  }
  else if(answer==18){
    std::cout <<".\n";
  }
  else if(answer==19){
    std::cout <<".\n";
  }
  else{
    std::cout <<"Very doubtful.\n";
  }
//just missing statements for random choices  
 
}
----------------------------
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

