#include<stdio.h>

struct Student{
int rollNo;
char name[30];
char branch[3];
float percent;
};

void getinfo(struct Student S[2])
{int i;
printf("Enter details\n");
for(i=0;i<2;i++)
{scanf("%d",&S[i].rollNo);
scanf("%s",S[i].name);
scanf("%s",S[i].branch);
scanf("%f",&S[i].percent);}
}

void display(struct Student S[2])
{int i;
printf("Details\n");
for(i=0;i<2;i++)
{printf("Roll No.: %d\n",S[i].rollNo);
printf("Name: %s\n",S[i].name);
printf("Branch: %s\n",S[i].branch);
printf("Percent: %f\n",S[i].percent);
}
}

void main()
{struct Student S[2];
getinfo(&S[2]);
display(&S[2]);
printf("\n");
}
