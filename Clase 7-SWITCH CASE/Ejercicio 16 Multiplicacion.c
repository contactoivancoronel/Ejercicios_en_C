#include <stdio.h>

main()
{
	int num1,num2,num3;
	
	printf("Ingrese un numero:");
	scanf("%d",&num1);
	
	printf("Ingrese el segundo numero:");
	scanf("%d",&num2);
	
	printf("Ingrese el tercer numero:");
	scanf("%d",&num3);
	
	if(num1%num2==num3)
	{
		printf("La division entre el primer numero y el segundo da como resto el tercero.");

	}
	else 
	printf("Gracias");
}
