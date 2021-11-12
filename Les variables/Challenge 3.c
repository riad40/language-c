#include<stdio.h>
#include<math.h>
int main(){
	
	float Mile,m;

	printf("donner la valeur de la distance en m ");
	scanf("%f",&m);

	Mile=m/(1000*1.609);

	printf("voila la distance en Mile %f",Mile);
	
	return 0;
	
}

