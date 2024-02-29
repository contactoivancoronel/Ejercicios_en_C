#include<stdio.h>

main()

{
	int numero,i;
	
	do{
	
	printf("Adivine un numero el numero escondido entre 1 y 10...\nSi no acertaste, vuelve a intentarlo :");
    scanf("%d",&numero);
    }
    while((numero<1)||(numero>10)||(numero!=4));
	
	if(numero==4){
		printf("¡Acertaste! El numero escondido es el %d",numero);
		
	}

}
