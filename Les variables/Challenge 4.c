#include<stdio.h>
#include<math.h>

int main(){
	
	float m,Mile;
    const float x = 1000, y = 1.609;

	printf("donner la valeur de la distance en Mile ");
	scanf("%f",&Mile);

	m = (Mile * y) / x;

	printf("voila la distance en m %f",m);
	return 0;	
}




