#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%i" "%i" "%i", &a , &b, &c);
	if(a!=b &&  b!=c && c!=b && c!=a )
	{
		printf("esclaeno");
	}
	else if(a==b&& b==c )
	{
	printf("equilatero");
	}
	else if ( (a==b ) && (b!=c) || (c==b )&& (b!=a) ){
		printf("isosceles");
	}
	else if (a+b+c!=0)
	{ 
		printf("error");
	}
		
		
			return  0;
}