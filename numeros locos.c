#include<stdio.h>
#include<stdlib.h>

int main(){
	int mod, datos, dato,  cont=0, registro;
	scanf("%d",&mod);
	scanf("%d",&datos);
	
	int arreglo[datos];
	for(int i=1;i<=datos;i++){
		scanf("%d",&dato);
		arreglo[i]=dato;
	}
	for(int i=1;i<=datos;i++){
		if(i<datos){
			registro=arreglo[i]+arreglo[i+1];
		}else{
			registro=arreglo[i]+arreglo[1];
		}
		if(registro%mod==0)
		   cont+=1;
	}
	printf("%d",cont);
	
}