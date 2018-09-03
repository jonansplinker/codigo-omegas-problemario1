#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	float mm,p,l;
	scanf("%f",&mm);
	p=(mm+5)/(2*(mm+1));
	l=((pow(p,2))+(mm*(mm-(2*p))))/(mm*p);
	printf("%f",l);
	return 0;
}