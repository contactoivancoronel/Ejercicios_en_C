#include<stdio.h>

main()
{
	int p=0;
	int opcion;
	
	while (opcion!=3)
	{
		printf("1.-Archivo\n");
		printf("2.-Buscar\n");
		printf("3.-Salir\n");
		printf("Indica la opcion:");
		scanf("%d",&opcion);
	
    	switch(opcion) {
    	
	 	case 1:printf("Ok, elegiste (Archivo)\n");break;
	 	case 2:printf("Ok, elegiste (Buscar)\n");break;
	 	case 3:break;
	 	default:printf("No ha digitado un numero correcto.\n");
	 }
	 }
}
