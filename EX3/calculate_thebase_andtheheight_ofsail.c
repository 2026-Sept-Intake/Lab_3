#include<stdio.h>
#include<math.h>
int main(void)
{
	int area;//area of the sail
	float height,base;//height of the sail,base of the sail
        printf("enter the area of the sail\n");
	scanf("%d", &area);
	height=sqrt(3.0*area); //area=1/2*base*height and base=2/3 height so area=1/2*2/3*height*height
        base=2*height/3.0; //given in the question
        printf("%.2f height of the sail in meters \n", height);
	printf("%.2f base of the sail in meters \n" , base);
	return 0;
}
