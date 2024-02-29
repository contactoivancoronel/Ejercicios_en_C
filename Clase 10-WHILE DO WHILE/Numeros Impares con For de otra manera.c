#include<stdio.h>
main()
{
int i,j,N;

printf("Ingrese un numero: ");
scanf("%d",&N);

for(i=0,j=1;i+j<N;i++,j++){
	printf("\n%d",i+j);
}
}
