#include<stdio.h>
#include<math.h>

main()
{
	int importe;
	
	printf("Introduzca importe en bruto:");
	scanf("%d",&importe);
	
	if(importe>15000)
	{
		printf("Su importe neto es:%d",importe/15);
	}
	
    if(importe < 15000){
	printf("Su importe neto es:%d",importe/10);
	}
}
