//Clase 8: Estructuras Iterativas
/*Escribe un programa que lea dos numeros y muestre por pantalla todos los numeros comprendidos entre dos numeros dados*/

#include<stdio.h>

main()
{
	int x,y,i;
	
	printf("Ingrese un numero:");
	scanf("%i",&x);
	printf("Ingrese un numero mayor que el primero:");
	scanf("%i",&y);
	
	
	for (i = x; i<= y;i++);
	printf("%i\n",i);	

}
