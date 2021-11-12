#include <stdio.h>
#include <math.h>

   int main(){
       
    int r;
    float P;
    float pi = 3.14;
    
    printf("Tapez la valeur du rayon \n");
    scanf("%d", &r);
    
    P = 2*pi*r;
    
    printf("la circonférence est : %f\n", P);
       
      return 0;
   }
