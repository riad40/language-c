#include <stdio.h>
#include <math.h>

int main(){
    
    int nbr, inv = 0, x;
    
    printf("tapez une entier : \n");
    scanf("%d", &nbr);
    
    x = nbr;
    
    while(x != 0){
    
    inv = (inv * 10) + (x % 10);
    x = x / 10;
    
    }
    
    printf("l'inverse est : %d\n", inv);
    
    return 0;
}
