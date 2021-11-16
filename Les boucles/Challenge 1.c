#include <stdio.h>
#include <math.h>

int main(){
    
    int nbr, i;
    
    printf("tapez une entier : \n");
    scanf("%d", &nbr);
    
    for (i = 0 ; i++ < 10;)
    {
    
    printf("%d \n", nbr * i);
        
    }
    
    return 0;
}

/*
 Algorithme Tableau_de_multiplication

 variables nbr, i : entière
 
 Debut
 
      ecrire('tapez une entier')
      lire(nbr)
      
    tantque i = 1 et i ++ < 10 fait nbr * i
           
       ecrire('le Tableau_de_multiplication est : ')
    
    fin tantque   
    fin 
*/
