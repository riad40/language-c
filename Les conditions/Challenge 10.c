#include <stdio.h>
#include <math.h>

int main(){
    
   float temperature;
    
   printf("Tapez la température : ");
   scanf("%f", &temperature);
   
   if (temperature <= 0)
   {
    printf("Glace");   
   }
   else if (temperature >= 0 && temperature < 100)
   {
    printf("eau"); 
   }
   else
   {
    printf("Vapeur");
   }
  
   return 0;
} 
