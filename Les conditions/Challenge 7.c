#include <stdio.h>
#include <math.h>

int main(){
    
    int annee;
    int option;
   
    printf("Tapez L'annee\n");
    scanf("%d", &annee);

    printf("choisir une option :\n1* les mois\n2* les jours\n3* les heurs\n4* les minutes\n5* les secondes\n");

    printf("choisir une option :\n");
    scanf("%d", &option);

    switch (option) 
    {
        case 1:
        printf("il y a %d mois cette annee\n", 12);
        break;
        
        case 2:
        printf("il y a %d jours cette annee\n", 12 * 365);
        break;
        
        case 3:
        printf("il y a %d heurs cette annee\n", 12 * 365 * 24);
        break;
        
        case 4:
        printf("il y a %d minutes cette annee\n", 12 * 365 * 24 * 60);
        break;
        
        case 5:
        printf("il y a %d secondes cette annee\n", 12 * 365 * 24 * 60 * 60);
        break;
        
        default:
        break;
    }
    return 0;
}
