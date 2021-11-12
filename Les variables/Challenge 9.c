#include <stdio.h>
#include <math.h>

    int main(){
        
        int x1;
        int y1;
        int x2;
        int y2;
        int d;
     printf("Tapez la valeur du x1\n");
     scanf("%d", &x1);
    
     printf("Tapez la valeur du y1\n");
     scanf("%d", &y1);
    
     printf("Tapez la valeur du x2\n");
     scanf("%d", &x2);
     
     printf("Tapez la valeur du y2\n");
     scanf("%d", &y2);
    
     d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
     
     printf("Alors la distance entre les deux point est d = %d\n", d);
    
    return 0;   
}
