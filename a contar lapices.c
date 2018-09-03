#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n,i,k,arreglo[1000],cont=0;
	scanf("%i %i",&n,&k);
	for(i=0;i<n;i++){
		scanf("%i",&arreglo[i]);
	}
	for(i=0;i<n;i++){
		if(k==arreglo[i]){
			cont++;
		}
	}
	printf("%i",cont);
	return 0;
}