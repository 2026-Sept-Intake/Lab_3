#include <stdio.h>
#include <math.h>
int main (void)

{ 
         double area, base, height;

	 printf("Enter the area of the triangular sail:  ");
	 scanf("%lf", &area);

	 height = sqrt(3.0 * area);
	 base = (2.0 / 3.0) * height;

	 printf("Height  : %.2f meters\n", height);
	 printf("Base  : %.2f meters\n", base);

	 return(0);

}                            
 
	 
	
      	
