#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,*a,i,s=0;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("Memory allocation uncessfull");
		exit(0);
	}
	printf("Elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("Sum=%d",s);
}
