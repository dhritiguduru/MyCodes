#include<stdio.h>
#include<string.h>
int main()
{
	char *str, s[10];
	int i;
	printf("enter a string: ");
	scanf("%s",&s);
	str = s;
	printf("printing the givien string using pointers: ");
	for(i=0;str[i]!='\0';i++)
	{
	printf("%c", *(str+i));
    }
return 0;
}
