#include<stdio.h>
#define PI 3.1416
#include<math.h>
main()
{
	int radio,longitud,area;
	
	printf("Ingrese el radio del circulo:");
	scanf("%d",&radio);
	
	longitud=2*PI*radio;
	area=PI*sqrt(radio);
	
	printf("La longitud es: %d\n",longitud);
	printf("El area es:%d",area);
}
