#include <stdio.h>
#include <math.h>

   int add(int a, int b){
       
    int somme;
    
    somme = a + b;
    
    return somme;
   }
   
   int main(){
       
       int a, b;
       
       printf("tapez l'entier a :\na = ");
       scanf("%d", &a);
       
       printf("tapez l'entier b :\nb = ");
       scanf("%d", &b);
       
    add (a, b);
    
    printf("add (a, b) = %d", (a + b));
      
       return 0;
   }
