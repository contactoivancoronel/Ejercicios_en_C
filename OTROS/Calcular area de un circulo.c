/* Programa que calcula el área de un círculo.
Y muestra las partes comunes de todos los programas en C*/
# include <stdio.h>
# include <conio.h>
# define PI 3.1416
# define CUADRADO(X) ((X)*(X))
float area;
float area_de_circulo (float);
main (void)
{
float radio;
printf(" Programa que calcula el área de un circulo.\n");
printf ("\t Dime el radio = ");
scanf("%f", &radio);
area = area_de_circulo( radio ); //llama a la función
printf ("El área del círculo de radio %f es =%f", radio, area);
printf("\nPulsa cualquier tecla para finalizar...");
getch( );
return 0;
}
float area_de_circulo( float r)
{
return (PI * CUADRADO(r));
}
