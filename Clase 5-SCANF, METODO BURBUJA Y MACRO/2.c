#include<stdio.h>
#include<math.h>

main()

{
	float diagonal1,diagonal2,superficie;
	
	printf("Ingrese el valor de la diagonal 1:\n");
	scanf("%f",&diagonal1);
	
	printf("Ingrese el valor de la diagonal 2:\n");
	scanf("%f",&diagonal2);
	
	superficie=diagonal1*diagonal2;
	
	printf("La superficie es:%f",superficie);
}
