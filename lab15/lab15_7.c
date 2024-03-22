#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,*a,i,s=0;
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("Elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
