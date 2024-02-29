#include<stdio.h>

main()
{
	int caracter;
	
	printf("Ingrese el caracter(s)y(n):");
	scanf("%c",&caracter);
	
	switch (caracter){
		case 's': printf("Correcto");break;
		case 'n': printf("Correcto");break;
		default: printf("Incorrecto");break;
	}
	
}
	
