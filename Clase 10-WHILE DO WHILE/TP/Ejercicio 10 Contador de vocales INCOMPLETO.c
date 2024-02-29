#include <stdio.h>
main()
{
	int cont,a=0,e=0,i=0,o=0,u=0;
	char frase;
	
	printf("Inserte una frase:");
	scanf("%c",&frase);
	
	for (cont=0;cont<=20;cont++){
	switch (frase){
		case 'a': a++; break;
		case 'e': e++; break;
		case 'i': i++; break;
		case 'o': o++; break;
		case 'u': u++; break;
	}
	printf("Letras a:%d \nLetras e:%d \nLetras i:%d\nLetras o:%d\nLetras u:%d\n",a,e,i,o,u);
}
}
