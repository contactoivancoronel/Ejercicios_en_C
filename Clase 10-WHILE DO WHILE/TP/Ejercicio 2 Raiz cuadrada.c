#include<stdio.h>
#include<math.h>

main()
{ 
   int num,resultado;
   
   
   printf("Ingrese un numero:");
   scanf("%i",&num);
   
   resultado= sqrt(num);
   
   if(num>0){ 
   printf("La raiz cuadrada es: %i\n",resultado);
   
   system("pause");
}
   else (num<0);
  printf("ERROR, el numero debe ser mayor que cero.");
   

   
}
