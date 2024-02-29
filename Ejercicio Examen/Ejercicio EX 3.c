#include <stdio.h> 

main () 

{ 
int dia, mes, anio, dia_anio = 0;

printf("Ingrese el dia del anio: ");
scanf("%d",&dia);
printf("Ingrese el mes del anio: ");
scanf("%d",&mes);
printf("Ingrese el anio: ");
scanf("%d",&dia_anio);


 switch (mes)
 {
  case 1: dia_anio = dia;break;
  case 2: dia_anio = dia + 31;break;
  case 3: dia_anio = dia + 59;break;
  case 4: dia_anio = dia + 90;break;
  case 5: dia_anio = dia + 120;break;
  case 6: dia_anio = dia + 151;break;
  case 7: dia_anio = dia + 181;break;
  case 8: dia_anio = dia + 212;break;
  case 9: dia_anio = dia + 243;break;
  case 10: dia_anio = dia + 274;break;
  case 11: dia_anio = dia + 304;break;
  case 12: dia_anio = dia + 334;break;
  default: printf("Fecha invalida");
 }
 
 printf("El numero del dia de anio es: %d",dia_anio);
 
 
 
return 0;
}
