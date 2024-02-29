#include<stdio.h>

main()
{
	int tc,tf,tk;
	
	printf("Ingrese la temperatura en Celsius: ");
	scanf("%d",&tc);
	
	tf=tc - 1.8 + 32;
	tk=tc+273;
	
	printf("La temperatura en Fahrenheit es %d\n",tf); 
	printf("La temperatura en Kelvin es %d",tk);

}
