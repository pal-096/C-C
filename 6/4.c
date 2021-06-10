#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *link;
};

void main()
{
struct Node *ptr,*start,*ptr2;
int i,ele,flag=0,n;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements:\n");
ptr=(struct Node*) malloc(sizeof(struct Node));
start=ptr;
scanf("%d",&(start->data));
start->link=NULL;
for(i=1;i<n;i++)
{struct Node *ptr1;
ptr1=(struct Node*) malloc(sizeof(struct Node));
start->link=ptr1;
scanf("%d",&(ptr1->data));
ptr1->link=NULL;
start=start->link;}

start=ptr;
while(start->link->link!=NULL)
start=start->link;
ptr2=start->link;
start->link=NULL;
free(ptr2);

printf("Last element deleted.\n");
start=ptr;
printf("Elements left\n");
do
{printf("%d ",start->data);
start=start->link;
}while(start!=NULL);
printf("\n");
}
