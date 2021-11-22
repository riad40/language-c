#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int divededby(int n,int a){
   
    int d;
   
    d = n / a;    
    
    return d;
}

int dividedby(){
    
    int d, i;   
    bool r = false;
    
    for(i = 2; i < d; i++){
        
    if(d % i == 0) { 
        
        r = true;
       
        break;
    }      
    
    }
  
     return r;
}

int main(){
    
    int n, a, d;
    
         printf("tapez l'entier n :\nn = ");
         scanf("%d", &n);
    
         printf("tapez l'entier a :\na = ");
         scanf("%d", &a);
    
    divededby(n, a);
    
         printf("la division = %d\n", divededby(n, a));
    
    dividedby();
    
    if(dividedby() == false)
    
         printf("%d est premier", divededby(n, a));
    
    else
  
         printf("%d est non premier", divededby(n, a));

    return 0;
}
