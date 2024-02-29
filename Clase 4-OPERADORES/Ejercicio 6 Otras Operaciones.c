//Ejercicio 6 Otras Operaciones
#include<stdio.h>
#include<math.h>

main()
{
	int x,y;
	
	x=10;
	y=2;
	
	//Otras operaciones
	
	x=pow(y,x);
	printf("10 elevado a la 2= %i\n",x);
	
	x=sqrt(x);
	printf("La raiz cuadrada de x es = %i\n",x);
	
	//x=x+y;
	x+=y;
	printf("El valor de x+y=%i\n",x);
	
	//x=x-y;
	x-=x-y;
	printf("El valor de x-y=%i\n",x);
	
	//x=x*y;
	x*=x*y;
	printf("El valor de x*y=%i\n",x);
	
	//x=x/y;
	x/=x/y;
	printf("El valor de x/y=%i\n",x);
	
	//x=x%y;
	x%=x%y;
	printf("El valor de x resto y=%i\n",x);
	
	x++;
	printf("El valor de x++ es: %i\n",x);
	x--;
	printf("El valor de x-- es: %i\n",x);
	
}
