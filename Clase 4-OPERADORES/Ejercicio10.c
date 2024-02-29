//Ejercicio 10
#include<stdio.h>

main()
{
	int a;
	int b;
	int c;
	
	a=5;
	b=3;
	c=12;
	
	printf("(a>3) es= %d\n",a>3);
    printf("(a>c) es= %d\n",a>c);
    printf("(a>c) es= %d\n",a>c);
    printf("(b<c)es=%d\n",b<c);
    printf("(b!=c)es=%d\n",b!=c);
    printf("(a==3)es=%d\n",a==3);
    printf("(a*b == 15)es=%d\n",a*b==15);
    printf("(a*b==-30)es %d\n",a*b==-30);
    printf("(c/b<a)es %d\n",c/b<a);
    printf("(c/b==-10)es %d\n",c/b==-10);
    printf("(c/b==-4)es %d\n",c/b==-4);
    printf("(a+b+c==5)es %d\n",a+b+c==5);
    printf("(a+b==8)&&(a-b==2)es %d\n",a+b==8 && a-b==2);
    printf("(a+b==8)||(a-b==6)es %d\n",a+b==8||a-b==6);
    printf("(a>3&&b>3&&c<-3)es %d\n",a>3&&b>3&&c<3);
    printf("(a>3&&b>=3%%c<-3)es %d\n",a>3&&b<=3&&c<-3);
    
    

}
