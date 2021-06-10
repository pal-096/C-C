#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *link;
};

void main()
{
struct Node *ptr,*start,*ptr2;
int i,pos,n;
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

printf("Enter position of element to be deleted: ");
scanf("%d",&pos);
if(pos==1)
{ptr2=start;
start=start->link;
ptr=start;
ptr2->link=NULL;
}
else
{for(i=1;i<pos-1;i++)
start=start->link;

ptr2=start->link;
start->link=ptr2->link;
ptr2->link=NULL;
start=start->link;

}
free(ptr2);

printf("Element deleted.\n");
start=ptr;
printf("Elements left\n");
do
{printf("%d ",start->data);
start=start->link;
}while(start!=NULL);
printf("\n");
}
