#include <stdio.h>
#include <math.h>

int main(void)
{
	float Base,Height,Area;

	printf("Enter Area (m^2):");
	scanf("%f", &Area);

	Height = sqrt(3*Area);

	Base = sqrt((4*Area)/3);

	printf("Height = %f m\n", Height);

	printf("Base = %f m\n", Base);

	return 0;
}
