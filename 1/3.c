#include<stdio.h>

void main()
{
int arr[10],i,pos;
printf("Enter the 10 elements:\n");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
printf("Enter the position from which element is to be deleted: ");
scanf("%d",&pos);

for(i=pos-1;i<9;i++)
 arr[i]=arr[i+1];
printf("Elements left:\n");
for(i=0;i<9;i++)
printf("%d ",arr[i]);
printf("\n");
}
