#include<stdio.h>
void main()
{
	int a,b,c;
	a=3;
	b=2;
	c=1;
	printf("%d\n",(a>b)&(b>c));
	printf("%d\n",(a>b)||(b>c));
	printf("%d\n",(a<b)||(b>c));
		printf("%d",(a<b)&&(b>c));
}
