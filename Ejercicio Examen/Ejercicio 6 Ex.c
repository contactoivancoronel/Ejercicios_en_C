#include <stdio.h>
#include<math.h>

main()
{
	int opcion;
	
	printf("\t Bienvenido al menu\nElija que ejercicio desea compilar\n1.Ejercicio 2\n2.Ejercicio 3\nIngrese la opcion:");
	scanf("%d",&opcion);
	
	if(opcion==1){	int num1,num2,opcion;
	
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
		case 6:printf("La raiz  de el numero 1 es:%d\n La raiz del numero 2 es: %d",sqrt(num1),sqrt(num2));break;
		default: printf("El numero ingresado no es correcto");
	}
		
	}
	
	else if(opcion==2){
	
	int dia, mes, anio, dia_anio = 0;

printf("Ingrese el dia del anio: ");
scanf("%d",&dia);
printf("Ingrese el mes del anio: ");
scanf("%d",&mes);
printf("Ingrese el anio: ");
scanf("%d",&dia_anio);


 switch (mes)
 {
  case 1: dia_anio = dia;break;
  case 2: dia_anio = dia + 31;break;
  case 3: dia_anio = dia + 59;break;
  case 4: dia_anio = dia + 90;break;
  case 5: dia_anio = dia + 120;break;
  case 6: dia_anio = dia + 151;break;
  case 7: dia_anio = dia + 181;break;
  case 8: dia_anio = dia + 212;break;
  case 9: dia_anio = dia + 243;break;
  case 10: dia_anio = dia + 274;break;
  case 11: dia_anio = dia + 304;break;
  case 12: dia_anio = dia + 334;break;
  default: printf("Fecha invalida");
 }
 
 printf("El numero del dia de anio es: %d",dia_anio);
 
 
 
return 0;
		
	}
}

