#include <stdio.h>

main()
{
	int x;
	
	printf("Introduzca un numero entre 1 y 7: ");
	scanf("i",&x);
	
	if(x == 1)
	printf("Lunes.\n");
	
	else if (x==2)
	printf("Martes.\n");
	
	else if (x==3)
	printf("Miercoles.\n");
	
	else if (x==4)
	printf("Jueves.\n");
	
	else if (x==5)
	printf("Viernes.\n");
	
	else if (x==6)
	printf("Sabado.\n");
	
	else if (x==7)
	printf("Domingo.\n");
	
	else 
	printf("El numero ingresado no es correcto");
	
	
}
