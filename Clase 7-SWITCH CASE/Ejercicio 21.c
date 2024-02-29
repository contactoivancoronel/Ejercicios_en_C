#include <stdio.h>

main()
{
	int sueldo,num;
	sueldo=80000;
	
	printf("-Para calcular el sueldo debe introducir un numero segun corresponda-\n1-El trabajador lleva mas de 10 anios.\n2-El trabajador lleva menos de 10 anios pero mas de 5.\n3-El trabajador lleva menos de 5 anios, pero mas de 3.\n4-El trabajador lleva menos de 3 anios.\n Su numero:");
	scanf("%d",&num);
	
	if(1){
		printf("%d",sueldo*10);
	}
		if(2){
		printf("%d",sueldo*7);
	}
		if(3){
		printf("%d",sueldo*5);
	}
		if(4){
		printf("%d",sueldo*3);
	}
	
}
