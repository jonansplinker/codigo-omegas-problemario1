#include <stdio.h>
#include <string.h>
int main(){
	int ee,a1=0,dd=0,v=0,v1=0,a;
	char p[1000000];
	scanf("%[^\n]",&p[a1]);
	ee = strlen(p);
	for(int i=0;i<ee;i++){
		if(p[i]>=97){
			v+=p[i]-32;
		}else{
			v1+=p[i];
		}
	}
	a=v+v1;
	for(int j=1;j<a;j++){
		if(a%j==0){
			dd+=1;
		}
	}
	printf("%d",dd+1);
	return 0;
}
