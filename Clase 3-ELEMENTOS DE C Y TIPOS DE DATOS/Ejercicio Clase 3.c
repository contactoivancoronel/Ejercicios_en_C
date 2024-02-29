//"Imprimir valores de las variables"
#include<stdio.h>

main()

{

	int x = 5;
	float y = 10.5;
	double y2 = 20.9;
	char z= 'a';
	
	/*printf("Valor de x:%i\n",x);
	printf("Valor de y:%g\n",y);
	printf("Valor de y2:%g\n",y2);
	printf("Valor de z:%c",z);*/
	
	printf("Valor de x:%i\n""Valor de y:%g\n""Valor de y2:%g\n""Valor de z:%c",x,y,y2,z);
}

