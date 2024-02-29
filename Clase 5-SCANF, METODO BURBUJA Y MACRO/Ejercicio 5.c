#include <stdio.h>
#include <math.h>
#define PI 3.1416

main()
{
	float s,d;
	
	printf("Introducir el valor de el area de un circulo:");
	scanf("%f",&s);
	
	d=2*sqrt(s/PI);
	
	printf("El diametro del circulo es:%g",d);
	
	
}
