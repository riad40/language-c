#include<stdio.h>
#include<math.h>

int main(){
	
	float m,Mile;

	printf("donner la valeur de la distance en Mile ");
	scanf("%f",&Mile);

	m=(Mile*1.609)/1000;

	printf("voila la distance en m %f",m);
	return 0;
	
}


