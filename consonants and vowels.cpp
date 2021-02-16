#include<stdio.h>
#include<string.h>
int main()
{
	char*str,s[10];
	int i, nv=0,nc=0;
	printf("enter a string: ");
	scanf("%s", &s);
	str = s;
	for(i=0;str[i]!='\0';i++)
	{
		if(*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u'||*(str+i)=='A'||*(str+i)=='E'||*(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U')
		nv++;
		else
		nc++;
	}
	printf("Number of Consonants: %d ", nc);
	printf("Number of Vowels: %d", nv);
	return 0;		
	}
	

