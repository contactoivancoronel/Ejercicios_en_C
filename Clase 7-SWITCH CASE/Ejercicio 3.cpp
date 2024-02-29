#include<stdio.h>

main()
{
	int h,m,s;
	
	printf("Ingrese la hora:");
	scanf("%i",&h);
	
	printf("Ingrese los minutos:");
	scanf("%i",&m);
	
	printf("Ingrese los segundos:");
	scanf("%i",&s);
	
	if(h>=0&&h<=23&&m>=0<=59&&s>=0&&s<=59)
	{
		s++;
		if(s==60)
		{
			s=0;
			m++;
			if(m==60);
			{m=0;
			h++;
			if(h=24)
			h=0;
			}
		}printf("La hora pasada un segundo es:(%i):(%i):(%i)",h,m,s);
	}
	
	
	else printf("La hora ingresada es incorrecta.");
}
