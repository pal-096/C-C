#include<stdio.h>

struct Player{
int playerNo;
char name[30];
int age;
int number;
};

void input(struct Player *P)
{
printf("Enter details\n");
scanf("%d",&P->playerNo);
scanf("%s",P->name);
scanf("%d",&P->age);
scanf("%d",&P->number);}


void display(struct Player *P)
{
printf("Details\n");
printf("Player No.: %d\n",P->playerNo);
printf("Name: %s\n",P->name);
printf("Age: %d\n",P->age);
printf("Number: %d\n",P->number);

}

void main()
{struct Player P;
input(&P);
display(&P);
printf("\n");
}
