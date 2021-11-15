#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float d;
    float s;
    float m;
    
    printf("Tapez le nombre a \n");
    scanf("%f", &a);
    
    printf("Tapez le nombre b \n");
    scanf("%f", &b);
    
    printf("Tapez le nombre c \n");
    scanf("%f", &c); 
    
    printf("Tapez le nombre d \n");
    scanf("%f", &d);
   
    s = a + b + c + d;
    printf("la somme est s=  %f\n", s);
    
    m = s / 4 ;
    
    printf("le moyenne est s/4 =  %f\n", m);
   
    return 0;
}
