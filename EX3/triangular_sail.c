#include<stdio.h>
#include<math.h>
int main (void)
{
	int a; //a=area of the sail
	float h,b; //h=height of the sail ,b=base of the sail
        printf("Enter the area of the sail\n");
	scanf("%d",&a);	
        h=sqrt(3.0*a); //a=(1/2)(2*h^2)/3 since b=2h/3
        b=((2*h)/3.0); //given b=2h/3
        printf("Height of the sail is %.2f meters\nBase of the sail is %.2f meters\n",h,b);
	return 0;
}
