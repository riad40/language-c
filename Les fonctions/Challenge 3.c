#include <stdio.h>
#include <math.h>
#include <stdbool.h>

  int nbr, i;

  bool isPremier(){
    
    bool r = false;
    
    for(i = 2; i < nbr; i++){
        
    if(nbr % i == 0) { 
        
        r = true;
       
        break;
    }      
    
    }
  
     return r;
}

  int main(){

      printf("tapez une entier :\nnbr = ");
      scanf("%d", &nbr);
      
    isPremier();
    
    if(isPremier() == false){ 
      
      printf("le nombre est premier");
    
    }  
      
    else {
      
      printf("le nombre est non premier");
     
    }
      
      return 0;
  }
