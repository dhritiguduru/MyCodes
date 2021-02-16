#include<stdio.h>
int main()
{
	int bs,outflow,inflow,noInflow,i=0;
	printf("\n enter bucket size:");
	scanf("%d",&bs);
	printf("\n enter output flow:");
	scanf("%d",&outflow);
	printf("\n enter no of inflows:");
	scanf("%d",&noInflow);
	int size_left=0;
	int storage=0;
	for(i=0;i<noInflow;i++)
	{
		size_left=bs-storage;
		printf("\nenter inflow:");
		scanf("%d",&inflow);
		if(inflow<=size_left)
		{
			storage+=inflow;
			printf("\nbuffer size=%d out of %d bucket size",storage,bs);
			
		}
		else
		{
			printf("packet loss=%d",inflow-size_left);
			storage=bs;
			printf("\nbuffer size=%d out of %d bucket size",storage,bs);
		}
		storage-=outflow;
	}
}
