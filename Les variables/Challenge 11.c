#include <stdio.h>
#include <math.h>

   int main(){
       
    float langueur;
    float largeur;
    float P;
   
     printf("Tapez la valeur du langueur : \n");
     scanf("%f", &langueur);
   
     printf("Tapez la valeur du largeur : \n");
     scanf("%f", &largeur);
     
     P = 2*(langueur + largeur);
     
     printf("alors la circonférence de la rectangle est : %f", P);
    
     return 0;
   }
