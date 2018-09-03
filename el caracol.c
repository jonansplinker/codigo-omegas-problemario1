#include <stdio.h>

int main(int argc, char *argv[]) {
	int p,s,r,s2=0,m=0;
	while ((p<1||p>1000000) && (s<1||s>1000000) && (r<1||r>1000000))
	{
	scanf ("%d" "%d" "%d",&p,&s,&r);
	}
	if (s>r)
	{
do
{
s2=s2+s-r;
m++;
if (s2>p)
{
m=m-1;
}
}
while (p>=s2);
	}
printf("%d",m);
	
return 0;
}