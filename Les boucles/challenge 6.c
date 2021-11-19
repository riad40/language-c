#include <stdio.h>
#include <math.h>

int main(){
    
    int nbr, p, m = 0;
    
    printf("tapez un entier : ");
    scanf("%d", &nbr);
    
    while(nbr >= 2){
        
        for(p = 1; p <= nbr; p++)
       
        if(nbr % p == 0){
       
            m++;
        }
       
        if(m == 2){
       
            printf("%d\n", nbr);
       
        }
        
        m = 0;
       
        nbr--;
    }
    
    return 0;
}
