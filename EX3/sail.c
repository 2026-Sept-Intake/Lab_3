#include<stdio.h>
#include<math.h>
int main(void)
{
	float B,H,A;//B-base,H-height,A-area
	printf("Enter the area of sail :");
	scanf("%f", &A);
	H = sqrt(3*A);// by using the equation A=(1/2)*H*B
	B = (2*H)/3;
	printf("The height of the sail is %.2f meters\n", H);
	printf("The base of the sail is %.2f meters\n", B);
	return 0;
}
