#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int p,numero,i,sum1=0,sum2=0,contador1=0,contador2=0,mm,m;
	scanf("%d",&p);
	for (i=1;i<=p;i++)
	{
		scanf("%d",&numero);
if (numero%2==0){
sum1+=numero;
contador1=contador1+1;

}
else{
sum1+=numero;
contador2=contador2+1;

}
	}
mm=sum1/contador1;
m=sum2/contador2;
if (mm<m)
{
printf("APARICIO");
	}
else if(m<mm)
{
printf("NONILA");
	
}
else {
printf("EMPATE!");
}
	
	
	
	return 0;
}