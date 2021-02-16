#include<stdio.h>
#include<stdlib.h>
int main(){
int no_of_frames,wsize,i=0,x=0,j=0,Ack;
printf("Enter no of frames : \n");
scanf("%d",&no_of_frames);
printf("Enter window size: \n");
scanf("%d",&wsize);
while(i<no_of_frames)
{
x=0;
for(j=i;j<i+wsize && j<no_of_frames ;j++)
printf("Frame %d is sent \n" ,j);
for(j=i;j<i+wsize && j<no_of_frames ;j++)
{
Ack=rand()%2;
if(Ack==1)
{
printf("Acknowledgement for Frame %d is received \n",j);
x++;
}
else
{
printf("Retransmitting the window\n");
i=i-x;
break;
}
}
i=i+x;
}
}
