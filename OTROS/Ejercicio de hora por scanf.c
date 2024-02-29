#include <stdio.h>
main ()
{
int H, M, S, NUM;
printf("Ingrese la hora con formato HH:MM:SS \n");
NUM = scanf("%d:%d:%d", &H, &M, &S);
printf("\n\nH = %d\nM = %d\nS = %d", H, M, S);
printf("\n\nValores ingresados correctamente =%d", NUM);
}

