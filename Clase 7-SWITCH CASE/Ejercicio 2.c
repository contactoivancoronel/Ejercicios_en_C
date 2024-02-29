#include <stdio.h>

main()
{
  char letra;
  
  printf("Ingrese una LETRA de la a-z que sea MINUSCULA:");
  scanf("%s",&letra);
  
  switch(letra){
  	case 'a':printf("%s es una vocal");
  	case 'e':printf("%s es una vocal");
  	case 'i':printf("%s es una vocal");
  	case 'o':printf("%s es una vocal");
  	case 'u':printf("%s es una vocal");
  	break;
	default:printf("%s no es una vocal.");
  }
	
}
