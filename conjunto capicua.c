#include <stdio.h>

int main(int argc, char *argv[]) {

	

		int k,p=0,aux=0,pp;
		scanf("%d",&k);
		int a[k];
		if(k%2==0){
			p=k/2;
		}else{
			p=(k/2)+1;
		}
		pp=k;
		for(int i=0;i<k;i++){
			scanf("%d[^ ]",&a[i]);
		}
		for(int i=0;i<p;i++){
			pp-=1;
			if(a[i]==a[pp]){
				aux+=1;
			}
		}
		if(aux==p){
			printf("SI");
		}
		else{
			printf("NO");
		}
		return 0;
}

