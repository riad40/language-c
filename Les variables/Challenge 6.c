#include<stdio.h>
#include<math.h>

int main(){
	
	float c,f;
    const float x = 31, y = 1.8;

	printf("donner la valeur de temperature en f ");
	scanf("%f",&f);

	c = (f - x) / y;

	printf("voila la temperature en c %f",c);

	return 0;	
}
