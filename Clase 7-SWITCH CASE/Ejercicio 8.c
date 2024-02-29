#include <stdio.h>

int main()
{
	int num;
	
	printf("Ingrese un numero:");
	scanf("%d",&num);
	
	if(num>100)
	{
		printf("El numero ingresado es mayor a 100");
	}
	else
	printf("El numero es menor a 100");
}

