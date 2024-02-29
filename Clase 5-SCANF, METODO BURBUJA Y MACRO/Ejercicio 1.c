#include<stdio.h>
#include<math.h>

main()
{

float radio,superficie,longitud;

printf("Introduce un radio:");
scanf("%f",&radio);

superficie= M_PI*pow(radio,2);
longitud=2*M_PI*radio;

printf("La superficie del circulo es : %f\n",superficie);
printf("La longitud de la superficie es: %f\n",longitud);
}
