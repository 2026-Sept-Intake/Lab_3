#include<stdio.h>
#include<math.h>

int main(void)
{
	float area;

	printf("Area of the sail: ");
	scanf("%f",&area);

	float h = sqrt(3*area);
	float b = (2*h/3);

	printf("Height of the sail: %.2f meters\n",h);
	printf("Base of the sail: %.2f meters\n",b);

}
