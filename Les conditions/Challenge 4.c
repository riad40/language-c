#include <stdio.h>
#include <math.h>

int main(){
    
    char alphabet;
    
    printf("Tapez une alphabet \n");
    scanf("%s", &alphabet);
    
    switch (alphabet) {
   
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    
    printf("c'est une voyelle ");
    break ;
  
    default :
    printf("c'est pas d'une voyelle ");    
    }

    return 0;    
}


