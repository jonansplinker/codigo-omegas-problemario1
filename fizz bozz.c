#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n,i;
	scanf("%i",&n);
	if(n<=100000){
		int *arreglo=calloc(n,sizeof(int));
		for(i=0;i<n;i++){
			scanf("%i",&arreglo[i]);
		}
		for(i=0;i<n;i++){
			if(arreglo[i]%3==0){
				printf("Fizz");
			}
			if(arreglo[i]%5==0){
				printf("Bozz");
			}
			if(arreglo[i]%3!=0 && arreglo[i]%5!=0){
				printf("NoFizzBozz");
			}
			printf("\n");
		}
	}
	return 0;
}