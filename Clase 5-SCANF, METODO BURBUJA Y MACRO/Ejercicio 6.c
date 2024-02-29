#include<stdio.h>

main()
{
    char letra[5];

    printf("Debe introducir una palabra con cinco letras: ", letra[5]);
	scanf("%s, %s, %s, %s, %s,", &letra[1], &letra[2], &letra[3], &letra[4], &letra[5]);
	
	printf("Los codigos ASCII de cada letra son: %d %d %d %d %d", letra[1]+5, letra[2]+5, letra[3]+5, letra[4]+5, letra[5]+5);
}
