#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int s;
    int m;
    
    printf("Tapez le nombre a \n");
    scanf("%d", &a);
    
    printf("Tapez le nombre b \n");
    scanf("%d", &b);
    
    printf("Tapez le nombre c \n");
    scanf("%d", &c); 
    
    printf("Tapez le nombre d \n");
    scanf("%d", &d);
   
    s = a + b + c + d;
    printf("la somme est s=  %d\n", s);
    
    m = s / 4 ;
    
    printf("le moyenne est s/2=  %d\n", m);
   
    return 0;
}
