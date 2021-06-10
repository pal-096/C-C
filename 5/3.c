#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *link;
};

void main()
{
struct Node *ptr,*start;
int i,ele,flag=0,flag1=0;
ptr=(struct Node*) malloc(sizeof(struct Node));
start=ptr;
start->data=10;
start->link=NULL;
for(i=1;i<5;i++)
{struct Node *ptr1;
ptr1=(struct Node*) malloc(sizeof(struct Node));
start->link=ptr1;
scanf("%d",&(ptr1->data));
ptr1->link=NULL;
start=start->link;}
start=ptr;
printf("Elements present\n");
do
{printf("%d ",start->data);
start=start->link;
}while(start!=NULL);
printf("\n");
printf("Enter element to be searched for: "); scanf("%d",&ele);
start=ptr;
do
{if(start->data==ele){
flag++; flag1=1;
printf("Element found at position %d",flag); break;}
else
{start=start->link; flag++;
}
}while(start!=NULL);
if(flag1==0)
printf("Element not found");
printf("\n");
}
