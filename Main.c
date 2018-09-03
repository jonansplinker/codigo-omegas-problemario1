#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%i" "%i" "%i", &a , &b, &c);
	if(a>b)
	{
		
		if(b>c)
		{
		printf("el numero mayor es %i",a);
	}
	}
		else if (a<b){
				 if (b>c)
			printf("el numero mayor es %i",b);
				 else {
					 printf("el numero mayor es %d",c);
				 }
			}
		
			return  0;
}