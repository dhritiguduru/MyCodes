#include<stdio.h>
#include<string.h>
struct frames{
	int seqno;
	char data[100];
}frame[100];
int main()
{
	int i,j,n;
	printf("\nenter no of frames:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter sequence number:");
		scanf("%d",&frame[i].seqno);
		printf("\nenter data associated with %d sequence no:",frame[i].seqno);
		scanf("%s",&frame[i].data);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(frame[j].seqno>frame[j+1].seqno)
			{
				int temp=frame[j].seqno;
				frame[j].seqno=frame[j+1].seqno;
				frame[j+1].seqno=temp;
				char tempstr[100];
				strcpy(tempstr,frame[j].data);
				strcpy(frame[j].data,frame[j+1].data);
				strcpy(frame[j+1].data,tempstr);
				
			}
		}
	}
	printf("\n fragments of a packet at receiver end is: \n");
	printf("\n seqno data:");
	for(i=0;i<n;i++)
	{
		printf("%d:%s\n",frame[i].seqno,frame[i].data);
	}
}
