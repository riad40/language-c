#include <stdio.h>
#include <math.h>

    int main(){
        
        float x1, y1, x2, y2, d;
     
	 printf("Tapez la valeur du x1\n");
     scanf("%f", &x1);
    
     printf("Tapez la valeur du y1\n");
     scanf("%f", &y1);
    
     printf("Tapez la valeur du x2\n");
     scanf("%f", &x2);
     
     printf("Tapez la valeur du y2\n");
     scanf("%f", &y2);
    
     d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
     
     printf("Alors la distance entre les deux point est d = %f\n", d);
    
    return 0;   
}
