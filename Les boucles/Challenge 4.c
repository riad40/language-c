#include <stdio.h>
#include <math.h>

int main(){
    
    int nbr = 1 , s = 0, max = 0;
    
    printf("Tapez une séries des nombres\n");
 
    while(nbr!=0)
    {
    scanf("%d", &nbr);
    
    while (nbr < 0 || nbr >= 100){

    printf("jute tapez des entier positif et inferieur a 100 \n");
    scanf("%d", &nbr);
   
    }

    s = s + nbr;
 
    if(nbr > max){
       
       max = nbr;
   
    }  
  
    }
 
   printf("la soome du série est : %d\n", s);
   printf("le max du série est : %d\n", max);

    return 0;
}
