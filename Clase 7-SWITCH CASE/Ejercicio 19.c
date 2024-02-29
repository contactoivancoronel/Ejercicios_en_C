#include <stdio.h>

main()
{
	int num1,num2,opcion;
	
	printf("Introduzca peso en Kilogramos:");
	scanf("%d",&num1);
	
	printf("1- Pasar a gramo.\n2-Pasar a miligramo. ");
	scanf("%d",&opcion);
	
	switch(opcion)
	{
	case 1:printf("El peso en gramo es:%d",num1*1000);
	}
	switch (opcion)
    case 2:printf("El peso en miligramos es:%d",num1/0.0000010000);
}
