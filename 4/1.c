#include<stdio.h>
#include<stdlib.h>
#define max 10

void main()
{
int arr[max],i,top=-1,ch,x,ele,num;
printf("Enter number of elements: ");
scanf("%d",&num);
while(1)
{
printf("1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:{
if(top==(num-1))
printf("\nStack overflows\n");
else
{
printf("Enter the element: ");
scanf("%d",&x);
top++;
arr[top]=x;
}
}break;
case 2:{
if(top==-1)
printf("\nStack underflows\n");
else
{
ele=arr[top];
top--;
}
}break;
case 3:{
if(top==-1)
printf("\nStack Empty\n");
else
{printf("Elements present\n");
for(i=0;i<=top;i++)
printf("%d ",arr[i]);
printf("\n");
}
}break;
case 4: exit(0);
default: printf("\nWrong choice\n"); break; }
}
}
