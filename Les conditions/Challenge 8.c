#include <stdio.h>
#include <math.h>
int main(){
    
    int a;
    
    printf("Tapez la valeur a : ");
    scanf("%d", &a);
   
   if (a > 0)
   {
    printf("la valeur est positif");   
   }
   else if (a < 0)
   {
    printf("la valeur est negatif"); 
   }
   else
   {
    printf("la valeur est null");
   }
   
    return 0;
}   
