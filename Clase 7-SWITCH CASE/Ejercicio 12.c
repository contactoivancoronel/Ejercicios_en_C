#include <stdio.h>
#include <math.h>

main()
{
	int num1,num2,num3;
	
	printf("Ingrese un numero:");
	scanf("%d",&num1);
	
	printf("Ingrese el segundo numero:");
	scanf("%d",&num2);
	
	printf("Ingrese el tercer numero:");
	scanf("%d",&num3);
	
	if(num1+num2==num3)
	{
	printf("La suma de el primer y el segundo numero da como resultado el tercer numero.");
	}
else 
printf("La suma entre el primer y el segundo numero no tiene como resultado el tercer numero.");
}
