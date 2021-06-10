#include<stdio.h>

void main()
{
int arr[10],i,flag=-1,ele;
printf("Enter the 10 elements:\n");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
printf("Enter the element to be deleted: ");
scanf("%d",&ele);
for(i=0;i<10;i++)
{
  if(ele==arr[i])
     {flag=i; break;}
}

if(flag==-1)
{printf("Element not found\n");
printf("Elements present:\n");
for(i=0;i<10;i++)
printf("%d ",arr[i]);
}

else
{
for(i=flag;i<9;i++)
 arr[i]=arr[i+1];
printf("Elements left:\n");
for(i=0;i<9;i++)
printf("%d ",arr[i]);
}
printf("\n");
}
