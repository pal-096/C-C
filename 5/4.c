#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *link;
};

void main()
{
struct Node *ptr,*start,*ptr2;
int i,ele,flag=0;
printf("Enter 5 elements:\n");
ptr=(struct Node*) malloc(sizeof(struct Node));
start=ptr;
scanf("%d",&(start->data));
start->link=NULL;
for(i=1;i<5;i++)
{struct Node *ptr1;
ptr1=(struct Node*) malloc(sizeof(struct Node));
start->link=ptr1;
scanf("%d",&(ptr1->data));
ptr1->link=NULL;
start=start->link;}

start=ptr;
while(start->link!=NULL)
 start=start->link;
ptr2=(struct Node*) malloc(sizeof(struct Node));
start->link=ptr2;
ptr2->data=20;
ptr2->link=NULL;

start=ptr;
ptr2=(struct Node*) malloc(sizeof(struct Node));
ptr=ptr2;
ptr2->link=start;
ptr2->data=30;
start=ptr;

printf("Elements present\n");
start=ptr;
do
{printf("%d ",start->data);
start=start->link;
}while(start!=NULL);
printf("\n");
}
