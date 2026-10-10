#include <stdio.h>
#include <math.h>

int main(void){
	
	float a; //a = area
	float h; //h = height
	float b; //b = base
        
	printf("Area of the sail: ");
	scanf("%f", &a);

	h = sqrt(3.0 * a); //Calculating height
	
	b = (2.0/3.0) * h; //Calculating base
	
	printf("Height of the sail: %.2f meters\n", h);
	printf("Base of the sail: %.2f meters\n", b);
        //Printing results formatted to 2 decimal places
	
	return 0;



}
