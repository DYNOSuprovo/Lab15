#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[50];
	printf("Enter A String");
	scanf("%[^\n]s",str);
	printf("%s",str);
}
