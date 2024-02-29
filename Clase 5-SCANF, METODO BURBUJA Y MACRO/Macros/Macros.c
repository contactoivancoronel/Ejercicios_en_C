//Macros

#include<stdio.h>

main()

{
	float PI;
	int y;

    PI=3.1416;
    
	printf("Introduce el numero para y:",y);
	scanf("%i",&y);
	
	printf("El valor de PI es:%g.\n",PI);
	
	PI=PI*y;
	
	printf("El nuevo valor de PI es:%g.\n",PI);

}
