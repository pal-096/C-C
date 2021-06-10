#include<stdio.h>

struct Employee{
int empNo;
char name[30];
float salary;
};

void main()
{
struct Employee E[5],temp;
int i,j;
printf("Enter details (EmpNo,Name,Salary)\n");
for(i=0;i<5;i++)
{scanf("%d",&E[i].empNo);
scanf("%s",E[i].name);
scanf("%f",&E[i].salary);}

for(i=3;i>=0;i--)
{for(j=0;j<=i;j++)
{
if(strcmp(E[j].name,E[j+1].name)>0)
{temp=E[j];
E[j]=E[j+1];
E[j+1]=temp;
}																								
}
}
for(i=0;i<5;i++)
{printf("Employee No.: %d\n",E[i].empNo);
printf("Name: %s\n",E[i].name);
printf("Salary: %f\n",E[i].salary);
}
}


