#include<stdio.h>

struct Product{
int productNo;
char name[30];
float price;
};

void main()
{struct Product *P[2],P1,P2;
int i;
float tot=0.0;
P[0]=&P1;
P[1]=&P2;
printf("Enter details:\n");
for(i=0;i<2;i++)
{scanf("%d",&P[i]->productNo);
scanf("%s",P[i]->name);
scanf("%f",&P[i]->price);}

for(i=0;i<2;i++)
{printf("Product No.: %d\n",P[i]->productNo);
printf("Name: %s\n",P[i]->name);
printf("Price: %f\n",P[i]->price);
tot+=P[i]->price;}
printf("\nTotal price:%f\n",tot);
}
