//Celsius a Fahrenheit
#include <stdio.h>

int main()

{
	float celsius,fahrenheit,kelvin;
	
	printf("Introduce la temperatura:");
	scanf("%g",&fahrenheit);
	
	printf("La temperatura en Fahrenheit es:%g\n");
	
	celsius=(fahrenheit-32)*5/9;
	printf("La temperatura en Celsius es:%g\n",celsius);
	
	kelvin=(fahrenheit-32)*(5/2)+273.15;
	printf("La temperatura en Kelvin es:%g\n",kelvin);
	
	
	
return 0;

}
