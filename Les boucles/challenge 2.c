#include<stdio.h>  
#include <math.h> 

int main(){  
   
    int nbr, ligne, colone, espace;  
  
    printf("tapez combien de ligne dans le pyramide :\n");  
    scanf("%d", &nbr);  
  
    for(ligne = 1; ligne <= nbr; ligne++)  
    {  
        for(espace = 1; espace <= (nbr - ligne); espace++)  
        {  
            printf(" ");  
        }  
        for(colone = 1; colone <= (2 * ligne - 1); colone++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
  
    return 0;  
}
