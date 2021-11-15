#include <stdio.h>
#include <math.h>

int main()
{
    int nbr;
    
    printf("Tapez un enti�re : ");
    scanf("%d", &nbr);

    if (nbr < 0)
    printf("le nombre est negatif");
    
    else if (nbr > 0)
    printf("le nombre est positif");
    
    else
    printf("le nombre est null");
   
    return 0;
}

