#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int i=0,n=0,j=0;
	printf("enter size of frame:");
	scanf("%d",&n);
	printf("enter characters in frame:"); 
	scanf("%s",&a);
	j=0;
	b[j++]='f';
	i=0;
	while(i!=n)
	{
		if(a[i]=='s'||a[i]=='f')
		{
			b[j++]='s';
			b[j++]=a[i++];
		}
		else
		{
			b[j++]=a[i++];
		}
	}
	printf("elements are:\n");
	b[j]='f';
	printf("%s",b);
}

