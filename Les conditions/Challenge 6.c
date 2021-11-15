#include <stdio.h>
#include <math.h>

int main(){
    
    int a;
    int b;
    int c;
    float x1;
    float x2;
	int D;
    
    printf("Tapez les valeurs du a, b et c \n");
    scanf("%d %d %d", &a, &b, &c);
    
    D = b * b - 4 * a * c;
    
    if (D > 0)
    {
    x1 = (-b - sqrt(D) ) / 2*a;
    x1 = (-b + sqrt(D) ) / 2*a;
    printf("l'équation accepte deux solutions \nx1 = %d\nx2 = %d\n", x1,x2);    
    }
    
    else if (D == 0)
    {
    x1 = -b / 2*a;
    printf("l'équation accepte une seul solution \nx1 = %d\n", x1);
    }
    else
    {
    printf("l'équation n'a pas de solutions %d\n", D);    
    }
    
    return 0;
}

