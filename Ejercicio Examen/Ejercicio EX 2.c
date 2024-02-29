#include<stdio.h>
#include <math.h>
main()
{
	int num1,num2,opcion;
	
    printf("Pulse 0 para salir:");
    scanf("%d",&c);
		
	printf("Ingrese un numero: ");
	scanf("%d",&num1);
	
	printf("Ingrese otro numero: ");
	scanf("%d",&num2);
	
	printf("\n1.Sumar\n 2.Restar\n 3.Multiplicar\n 4.Dividir\n 5.Potencia\n 6.Raiz\nIngrese la opcion:");
	scanf("%d",&opcion);

	
		switch(opcion){
		case 1:printf("La suma de los numeros es:%d",num1+num2);break;
		case 2:printf("La resta de los numeros es:%d",num1-num2);break;
		case 3:printf("La multiplicacion de los numeros es:%d",num1*num2);break;
		case 4:printf("La division de los numeros es:%d",num1/num2);break;
		case 5:printf("La potencia de el numero 1 es:%d\n La potencia del numero 2 es :%d",num1*num1,num2*num2);break;
		case 6:printf("La raiz  de el numero 1 es:%f\n La raiz del numero 2 es: %f",sqrt(num1),sqrt(num2));break;
		default: printf("El numero ingresado no es correcto");
    } 
}



