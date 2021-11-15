#include <stdio.h>
#include <math.h>

int main() {

    int a;
    int b;
    int v;
	
	printf("Tapez le nombre a \n");
    scanf("%d", &a);
    
	printf("Tapez le nombre b \n");
    scanf("%d", &b);
    
    v = a+b ; 
    printf("a+b= %d\n", v);
    v = a-b ;
    printf("a-b= %d\n", v);
    v = a*b;
    printf("a*b= %d\n", v);
    v = a/b;
    printf("a/b= %d\n", v);
    v = a%b;
    printf("a%%b= %d\n", v);

    return 0;
}

