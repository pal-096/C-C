#include<stdio.h>
#include<stdlib.h>
void main()
{
char ch,ele;
char chr[20];
int top=-1,i,c,num=20;
while(1)
{
printf("\n1.Enter character\n2.Reverse\n3.Exit\nEnter your choice: ");
scanf("%d",&c);
switch(c)
{
case 1:{
if(top==(num-1))
printf("\nStack overflows\n");
else
{
printf("Enter the character: ");
scanf("%s",&ch);
top++;
chr[top]=ch;
}
}break;
case 2:{
if(top==-1)
printf("\nStack underflows\n");
else
{
printf("String:\n");
for(i=0;i<=top;i++)
printf("%c ",chr[i]);
printf("\nReversed string:\n");
while(top>=0)
{
ele=chr[top];
printf("%c ",ele);
top--;
}
}
}break;
case 3: exit(0);
default: printf("\nWrong choice\n"); break; }
}
}
