#include <stdio.h>
int main(int argc, char *argv[]) {
int p,N;
scanf("%d",&N);
if(N!=0){
p=N%2;
if (p==0){
printf("par");
}
else {
	printf("impar");
}
}
return  0;
}