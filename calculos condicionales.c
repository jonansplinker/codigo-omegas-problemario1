#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,m=0;
	scanf ("%i",&a);
	if(1<=a && a<=1000)
	{
		while(a%2==0){
		a=a/2;
	
		m++;
		}
		while(a%2!=0){
			a=a+1;
			m++;
	}
		if (a>99){
			while(a>99){
				a=a/100;
				m++;
			}
			
		}
		else  {
			while(a>9){
				a=a/10;
				m++;
			}
		}
	 if (a%3==0){
		while (a%3==0){
			a=a-1;
			m++;
			
		}	
		
		}
printf("%i  %i",a,m);
	}
			return  0;
}