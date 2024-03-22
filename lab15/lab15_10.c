#include <stdio.h>
#include <string.h>
int main()
{
	char str[50],s2[20];
	printf("Enter A String");
	scanf("%[^\n]s",str);
	//printf("%s",str);
	strcpy(s2,str);
	puts(s2);
}
