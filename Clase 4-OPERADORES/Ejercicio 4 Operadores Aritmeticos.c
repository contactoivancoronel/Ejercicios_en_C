//Ejercicio 4
#include<stdio.h>

main()

{
	int var1,var2,resultado;
	var1=2;
	var2=11;
	
	//SUMA
	resultado=var1+var2;
	printf("%d+%d=%d\n",var1,var2,resultado);
	
	//RESTA
	resultado=var2-var1;
	printf("%d-%d=%d\n",var1,var2,resultado);
	
	//PRODUCTO
	resultado=var1*var2;
	printf("%d*%d=%d\n",var1,var2,resultado);
	
	//DIVISION ENTERA
	resultado=var2/var1;
	printf("%d/%d=%d\n",var2,var1,resultado);
	
	//RESTO DE LA DIVISION
	resultado=var2%var1;
	printf("Resto de la division=%d\n",resultado);
}
