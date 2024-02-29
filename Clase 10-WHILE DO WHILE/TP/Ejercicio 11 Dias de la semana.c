#include <stdio.h>
main()
{
	int p=0;
	int num;
	
	while (num){
	printf("Ingrese un numero del 1 al 7:");
	scanf("%d",&num);
	
	
	
	switch(num){
		case 1 : printf("Lunes\n");break;		
		case 2 : printf("Martes\n");break;
		case 3 : printf("Miercoles\n");break;
		case 4 : printf("Jueves\n");break;
		case 5 : printf("Viernes\n");break;
		case 6 : printf("Sabado\n");break;
		case 7 : printf("Domingo\n");break;
		case 8:break;
	
		
		default: printf("Error\n");
			
	}
    }

}

