#include<stdio.h>
#include<string.h>
int main()
{
	int i,x,key;
	char str[100];
	printf("\n enter a string:");
	gets(str);
	printf("\n enter the key");
	scanf("%d",&key);
	printf("\nchoose the following options:\n");
	printf("1=encrypt the string\n");
	printf("2=decrypt the string\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			for(i=0;i<strlen(str);i++)
			{
				str[i]+=key;
			}
			printf("\n encrypted string is:->%s",str);
			break;
		case 2:
			for(i=0;i<strlen(str);i++)
			{
				str[i]-=key;
			}
			printf("\n encrypted string is:->%s",str);
			break;
	}
}
