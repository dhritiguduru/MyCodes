#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,keylen,msglen;
	char input[100],key[30],key1[30],temp[30],quot[100],rem[30];
	printf("\n enter data:");
	scanf("%s",&input);
	printf("\n enter key:");
	scanf("%s",&key);
	keylen=strlen(key);
	msglen=strlen(input);
	strcpy(key1,key);
	for(i=0;i<keylen-1;i++)
	{
		input[msglen+i]='0';
	}
	for(i=0;i<keylen;i++)
	{
		temp[i]=input[i];
	}
	for(i=0;i<msglen;i++)
	{
		quot[i]=temp[0];
		if(quot[i]=='0')
		{
			for(j=0;j<keylen;j++)
			{
				key[j]='0';
			}
		}
		else
		{
			for(j=0;j<keylen;j++)
			{
				key[j]=key1[j];
			}
		}
		for(j=keylen-1;j>0;j--){
			if(temp[j]==key[j])
			{
				rem[j-1]='0';
			}
			else
			{
				rem[j-1]='1';
			}
		}
		rem[keylen-1]=input[i+keylen];
		printf("\n debug%d:",i);
		for(int k=0;k<keylen;k++)
		{
			printf("%c",rem[k]);
		}
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	printf("\n quotient is:");
	for(i=0;i<msglen;i++)
	{
		printf("%c",quot[i]);
	}
	printf("\n remainder is:");
	for(i=0;i<keylen-1;i++){
	printf("%c",rem[i+1]);
	}
	printf("\n final data is:");
	for(i=0;i<msglen;i++)
	{
		printf("%c",input[i]);
	}
	for(i=0;i<keylen-1;i++)
	{
		printf("%c",rem[i+1]);
	}
	return 0;
}
