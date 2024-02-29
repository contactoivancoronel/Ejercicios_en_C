#include<stdio.h>

main()

{
	int n;
	
	printf("Ingrese un numero:");
    scanf("%d",&n);
    
    if(n>0){
    	printf("El numero %d es positivo.",n);
	}
 if(n<0){
    	printf("El numero %d es negativo.",n);
	}

}
