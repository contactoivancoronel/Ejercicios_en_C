#include<stdio.h>

main()
{
	int cm,pie;
	float pulgada;

	printf("Ingrese una medida en centimetros: ");
	scanf("%d",&cm);
	
    pulgada=cm / 2,54 ;
    pie=cm/30,48;
	
	printf("%d cm son %d pies y %f pulgadas",cm,pie,pulgada);

/* 1 pie = 12 pulgadas
   1 pulgada = 2,54 cm */
}
