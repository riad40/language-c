#include <stdio.h>
#include <math.h>

   int main(){
       
    float r;
    float P;
    const float pi = 3.14;
    
    printf("Tapez la valeur du rayon \n");
    scanf("%f", &r);
    
    P = 2 * pi * r;
    
    printf("la circonférence est : %f\n", P);
       
    return 0;
}
