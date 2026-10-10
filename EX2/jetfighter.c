#include<stdio.h>
int main(void)
{ 
	float T,V,A,S;//T-time,V-final velocity,A-constant acceleration,S-displacement
        printf("Enter the final velocity in km/h : ");
	scanf("%f",&V);
	printf("Enter the distance travelled in meters-m : ");
	scanf("%f",&S);
	T = (36*S)/(V*5); // using the equations v=a*t , s=a*t^2 and converting kmh-1 to ms-1
        A = (5*V)/(18*T);
	printf("The acceleration is %.2f ms-2\n", A);
	printf("The time taken is %.2f s\n ", T);
	return 0;
}

