#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],b[20],i,j=0,k,count=0,n;
	printf("enter frame size:");
	scanf("%d",&n);
	printf("enter the frame in o's and 1's:\n");
	for(i=0;i<n;i++)
	{
		printf("enter %d bit:",i);
		scanf("%d",&a[i]);
	}
	i=0;
	while(i<n){
		if(count!=5)
		{
			if(a[i]==1)
			{
				b[j]=a[i];
				count++;
			}
			else{
				count=0;
				b[j]=a[j];
			}
		}
		else
		{
			b[j++]=0;
			count=0;
			b[j]=a[i];
		}
		i++;
		j++;
	}
	printf("\n");
	for(i=0;i<j;i++)
	{
		printf("%d  ",b[i]);
	}
}
