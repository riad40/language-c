#include <stdio.h>
#include <math.h>

  void echanger(int a, int b){
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("a = %d, b = %d\n", a, b);
}

   int main(){
       
       int a, b;
       
       printf("tapez a = ");
       scanf("%d", &a);
       
       printf("tapez b = ");
       scanf("%d", &b);
       
    echanger(a, b);
    
    printf("echanger(a, b) = %d, %d", a, b);
   
       
      return 0;
   }
