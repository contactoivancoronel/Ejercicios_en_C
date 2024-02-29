#include <stdio.h>
main ()
{
int H, M, S, TIEMPO;
printf("Ingrese la hora con formato HH:MM:SS \n");
scanf("%d:%d:%d", &H, &M, &S);
TIEMPO = H * 3600 + M * 60 + S;
printf("\n\nEl tiempo fue %ld segundos", TIEMPO);
}

