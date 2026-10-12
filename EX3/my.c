#include <stdio.h>
#include <math.h>

int main(void){
	
	float base, height, area;

	printf("Enter area of the sail");
	scanf("%f" , &area);

	height = sqrt(3*area);
	base = sqrt((4*area)/3);

	printf("Enter the height of the sail = %f" , height);
	printf("Enter the base of the sail = %f" , base);

	return 0;
}
