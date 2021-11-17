#include <stdio.h>
#include <math.h>

int main(){
    
    int nbr, i, j; 
    
    printf("tapez un entier : \n");
    scanf("%d", &nbr);
    
    j = 1;
    
    for(i = 2; i <= nbr / 2; i++){
        
    if(nbr % i == 0) { 
        
        j = 0;
     
    break; }  

    }
   
    if(j == 1)
    printf("l'entier est premier");
    
    else
    printf("l'entier est non premier");
 
  return 0;  
}
