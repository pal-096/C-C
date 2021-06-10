#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *link;
};

void main()
{
struct Node *ptr,*start,*ptr1,*ptr2,*ptr3,*ptr4;
int ele,flag=0;
ptr=(struct Node*) malloc(sizeof(struct Node));
start=ptr;
start->data=10;
start->link=NULL;
ptr1=(struct Node*) malloc(sizeof(struct Node));
start->link=ptr1;
ptr1->data=20;
ptr1->link=NULL;
ptr2=(struct Node*) malloc(sizeof(struct Node));
ptr1->link=ptr2;
ptr2->data=30;
ptr2->link=NULL;
ptr3=(struct Node*) malloc(sizeof(struct Node));
ptr2->link=ptr3;
ptr3->data=40;
ptr3->link=NULL;
ptr4=(struct Node*) malloc(sizeof(struct Node));
ptr3->link=ptr4;
ptr4->data=50;
ptr4->link=NULL;
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
flag++;
printf("Element found at position %d",flag); break;}
else
{start=start->link; flag++;
}
}while(start!=NULL);
if(flag==0)
printf("Element not found");
printf("\n");
}
