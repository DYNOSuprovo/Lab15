#include <stdio.h>
int main()
{
	int s=0;
	int i,*p,n;
	scanf("%d",&n);
	int a[n];
	p=&a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=&a[n-1];
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*p);
		p--;
	}
}
