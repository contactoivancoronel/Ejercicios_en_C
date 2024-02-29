//Macros

#include<stdio.h>
#define PI 3.1416

main()
{
	float x;
	x=PI;
	
	int y;
	
	printf("Introduce un numero para y:",y);
	scanf("%i",&y);
	
	printf("El valor de PI es:%g.\n",x);
	
	x=x*y;
	
	printf("El nuevo valor de PI es:%g.\n",x);
}
