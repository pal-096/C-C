#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *prev,*next;
};

void main()
{
struct Node *ptr,*start,*ptr1;
int i,n;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements:\n");
ptr=(struct Node*) malloc(sizeof(struct Node));
start=ptr;
scanf("%d",&(ptr->data));
ptr->next=NULL;
ptr->prev=NULL;

for(i=1;i<n;i++)
{ptr1=(struct Node*) malloc(sizeof(struct Node));
scanf("%d",&(ptr1->data));
start->next=ptr1;
ptr1->next=NULL;
ptr1->prev=start;
start=start->next;
}
start=ptr;
printf("Elements present ascending order of node:\n");
do
{printf("%d ",start->data);
ptr1=start;
start=start->next;
}while(start!=NULL);
printf("\n");
start=ptr1;
printf("Elements present descending order of node:\n");
do
{printf("%d ",start->data);
start=start->prev;
}while(start!=NULL);
printf("\n");
}
