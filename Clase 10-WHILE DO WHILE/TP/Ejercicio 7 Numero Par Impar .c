#include<stdio.h>

main()
{
	int num=0;
	
	printf("Ingrese un numero:");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("El numero es par");
	}
	else{
		printf("El numero es impar");
	}
}
