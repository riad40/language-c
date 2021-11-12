#include <stdio.h>
#include <math.h>


int main() {
    
    int val, p, d, t, temp, inv;
    
    printf("Tapez la valeur : \n");
    scanf("%d", &val);
    
    t = val % 10;
    temp = val / 10;
    d = temp % 10;
    p = temp / 10;
    inv = t * 100 + d * 10 + p * 1;
    
    printf("L'inverse du valeur est : %d", inv);

    return 0;
}
