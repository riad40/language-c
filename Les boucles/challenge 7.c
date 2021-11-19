#include <stdio.h>
#include <math.h>

int main(){
    
    int n, Un, U0 = 1, U1 = 1, i;
    
    printf("tapez l'indice :\nn = ");
    scanf("%d", &n);
    
    if(n < 0)
    {
        printf("les nombres negatif est non connu. tapez une nombre positif\n");
        scanf("%d", &n);
    }
    if(n == 0 || n == 1)
    {
        printf("U%d = 1", n);
    }
    else
    {
        for(i = 2; i <= n; i++)
        {
            Un = U0 + U1;  /*Un = Un - 1 + Un - 2*/
            U0 = U1;
            U1 = Un;   
        }
       
        printf("U%d = %d", n, Un);
    }
    
   return 0;
}
