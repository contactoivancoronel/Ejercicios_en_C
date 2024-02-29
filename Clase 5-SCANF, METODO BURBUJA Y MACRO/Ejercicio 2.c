#include<stdio.h>

main()

{
	int total=0, contador=0,prom,cali;
	
	while (contador!=3){
		printf("Introduce un valor:\n");
		scanf("%d",&cali);
		total+=cali;
		contador+=1;
	}
	
	if (contador!=0);{
	prom=total/3;
	printf("El promedio total es:%d\n",prom);
	}
}
