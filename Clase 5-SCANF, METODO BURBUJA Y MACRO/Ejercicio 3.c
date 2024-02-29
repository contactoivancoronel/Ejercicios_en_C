#include<stdio.h>
#include<math.h>

void main()
{
	int l1,l2,superficie;


	printf("Ingrese la longitud de la primera diagonal:");
	scanf("%d",&l1);
	
	printf("Ingrese la longitud de segunda diagonal:");
	scanf("%d",&l2);

	superficie= (l1*l2)/2;
	
	printf("La superficie es:%d\n",superficie);
	
}
