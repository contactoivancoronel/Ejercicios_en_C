#include<stdio.h>

main()
{
	int p=0;
	int opcion;
	int num1,num2,num3;
	
	while (opcion!=3)
	{
		printf("1.-Equilatero\n");
		printf("2.-Isosceles\n");
		printf("3.-Escaleno\n");
		printf("Indica la opcion:");
		scanf("%d",&opcion);
		
		printf ("Introduzca lado1:\n");
		scanf("%d",&num1);
		
		printf ("Introduzca lado2:\n");
		scanf("%d",&num2);
		
		printf ("Introduzca lado3:\n");
		scanf("%d",&num3);
	
    	switch(opcion) {
    	
	 	case 1:printf("El perimetro del triangulo equilatero es:%d\n",(num1+num2+num3));break;
	 	case 2:printf("El perimetro del triangulo isosceles es:%d\n",(num1+num2+num3));break;
	 	case 3:printf("El perimetro del triangulo escaleno es:%d\n",(num1+num2+num3));break;
	 	default:printf("No ha digitado un numero correcto.\n");
	 }
	 }
}
