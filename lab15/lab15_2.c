#include <stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int i,*p;
	p=a;
	for(i=0;i<5;i++)
	{
	printf("\n%d",*(p+i));
	}
}
