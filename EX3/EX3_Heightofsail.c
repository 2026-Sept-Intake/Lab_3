#include<stdio.h>
#include<math.h>
int main (void)
{
	float a; //a= area of the sail
	float h; //h= height
	float b; //b= base
        printf("enter the area of the sail");
	scanf("%f" , &a);
	h = sqrt(3.0 * a); // calculating height
        b = (2.0/3.0) * h; // calculating base
	printf("height of the sail: %.2f meters\n", h);
	printf("base of the sail: %2.f meters\n", b);
	return 0;
}



