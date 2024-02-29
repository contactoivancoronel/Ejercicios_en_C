#include<stdio.h>
#include<math.h>

void main()

{
     int num1;
     float resul,desc,totaladesc;
     
     printf("Ingrese el total de la factura:");
     scanf("%i",&num1);
     
     printf("Ingrese el porcentaje a descontar:");
     scanf("%f",&desc);
     
     totaladesc=(num1*desc)/100;
     resul= num1-totaladesc;
     
     printf("el precio final es:%f\n",resul);
     
}
