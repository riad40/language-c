#include<stdio.h>
#include<math.h>
int main(){

	float c,f;
	

	printf("donner la valeur de temperature en f ");
	scanf("%f",&f);

	c=(f-32)/1.8;

	if(c<0)
	printf("Très froids %f",c);

	else if (c<25)
	printf("froid %f",c);

	else if(c<37)
	printf("chaud %f",c);

	else
	printf("très chaud %f",c);
	

	return 0;

}
