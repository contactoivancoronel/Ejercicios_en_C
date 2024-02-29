//Imprimir en pantalla los numeros comprendidos segun ingrese el usuario

#include<stdio.h>
main()
{
	int x,y,i;
	 
	 printf("Ingrese un numero: ");
	 scanf("%d",&x);
	 
	 printf("Ingrese un numero mayor que el primero: ");
	 scanf("%d",&y);
	 
	 i=x+1;
	 while(i<y){
	 printf("%i, ",i);
	 i++;
}
}
