#include <stdio.h>
int main(int argc, char *argv[]) {
int c1 , c2 ,  c3 , prom ;
scanf ("%d" "%d" "%d",&c1,&c2,&c3);
if  ((1<=c1)&&( c1<=10 )&& (c2<=10)&&(1<=c2)&&(1<=c3)&&(c3<=10))
	{
	prom=((c1)+(c2)+(c3))/3;
	if (prom>=6){
		printf("1 \n");
		
	}
	else{
		printf("0 \n");
	}
}		
return  0;
}