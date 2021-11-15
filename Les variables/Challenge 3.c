#include<stdio.h>
#include<math.h>

int main(){
	
	float Mile,m;
    const float x = 1000, y = 1.609;
	
	printf("donner la valeur de la distance en m \n");
	scanf("%f",&m);

	Mile = m / (x*y);

	printf("voila la distance en Mile %f",Mile);
	
	return 0;	
}

