#include <stdio.h>

int main()
{
	int cont=0,num=0,may=0,men=0;
	
	do
	{
	printf("Ingrese un numero:\n");
	
	scanf("%d",&num);
	
	if(may<=num)
	{may=num;
	}
	if(men>=num)
	{
		men=num;
	}
	cont++;
    }while(cont<10);
    printf("El numero mayor es %d\n",may);
    printf("El numero menor es %d",men);
    
    return 0;
}
