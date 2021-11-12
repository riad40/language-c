#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20];
    char prenom[20];
    int age[20];
    char sexe[20];
    char tele[20];

    printf("Tapez votre Nom\n");
    scanf("%s", nom);

    printf("Tpez votre Prenom\n");
    scanf("%s", prenom);

    printf("Tpez votre Age\n");
    scanf("%ls", age);

    printf("Tapez votre Sexe\n");
    scanf("%s", sexe);

    printf("Tapez votre Tele\n");
    scanf("%s", tele);
    
    printf("votre nom Complet : %s %s, Age : %ls, Sexe : %s, Tele : %s\n", nom, prenom, age, sexe, tele);
    return 0;
}
