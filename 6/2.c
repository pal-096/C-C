#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *link;
};

void main()
{
struct Node *ptr,*start,*ptr2;
int i,ele,flag=0,n,pos;
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
printf("Enter the element to be added: ");
scanf("%d",&ele);
printf("Enter the position to be added to: ");
scanf("%d",&pos);
if(pos==1)
{ptr2=(struct Node*) malloc(sizeof(struct Node));
ptr2->link=start;
start=ptr2;
ptr=start;
ptr2->data=ele;
}
else{
for(i=1;i<pos-1;i++)
start=start->link;
ptr2=(struct Node*) malloc(sizeof(struct Node));
ptr2->link=start->link;
start->link=ptr2;
ptr2->data=ele;
}
start=ptr;
printf("Elements present\n");
do
{printf("%d ",start->data);
start=start->link;
}while(start!=NULL);
printf("\n");
}
