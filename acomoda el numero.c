#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,m,i,sum=0;
	scanf ("%i",&a);
	if(a>1 && a<=2000000){
		int *arreglo=calloc(a, sizeof(int));
		for(i=0;i<a;i++){
			scanf ("%i",&m);
			if(m>=0 && m<=1000000000){
				arreglo[i]=m;	
			}
		}
		for(i=1;i<a;i++){
			if(arreglo[0]>arreglo[i]){
				sum++;
			}
		}
		printf("%i",sum);
		free(arreglo);	
	}
	return 0;
}