#include <stdio.h>

main()
{
	int num1,num2,num3;
	
	printf("Introduzca un numero:");
	scanf("%d",&num1);
	
    printf("Introduzca un numero:");
	scanf("%d",&num2);

	printf("Introduzca un numero:");
	scanf("%d",&num3);
	
	if(num1<num2&&num2<num3)
	{
		if(num2<num3)
		{
			printf("%d\n%d\n%d\n",num1,num2,num3);
		}
		else{
		printf("%d\n%d\n%d\n",num1,num3,num2);
		}
	}
	

	
	if(num2<num1&&num2<num3)
	{
		if(num1<num3)
		{
			("%d\n%d\n%d\n",num2,num1,num3);
		}
		else{
			("%d\n%d\n%d\n",num2,num3,num1);
		}
	}
	
		if(num3<num1&&num3<num2)
	{
		if(num1<num2)
		{		
		printf("%d\n%d\n%d\n",num3,num1,num2);
    	}
    	else{
    		("%d\n%d\n%d\n",num3,num2,num1);
    	}
    	
	}

}

//No pude terminar el codigo me queme la cabeza jejeeje ;) pero lo intente
