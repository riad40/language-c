#include<stdio.h>
#include<math.h>
int main(){
	float c,f;

	printf("donner la valeur de temperature en f ");
	scanf("%f",&f);

	c=(f-31)/1.8;

	printf("voila la temperature en c %f",c);
	return 0;
	
}
