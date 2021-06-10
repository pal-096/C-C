#include<iostream>
#include<string.h>
using namespace std;

class Emp{
 protected:
  int emp_id;
  char emp_nm[30];
};

class Salary:public Emp{
  int salary;
 public:
  Salary(){emp_id=0; strcpy(emp_nm," "); salary=0;}
  Salary(int a, char nm[], int s){emp_id=a;strcpy(emp_nm,nm); salary=s;}
 
  int max(Salary S[],int n)
  {int Max=S[0].salary; int flag=0;
    for(int i=1;i<n;i++)
     {if(Max<S[i].salary)
         {flag=i;
         Max=S[i].salary;}}
     cout<<S[flag].emp_id<<"      ";cout<<S[flag].emp_nm<<"        ";cout<<S[flag].salary<<endl;
     
  return flag;
 }
  void disp()
  {cout<<emp_id<<"      ";cout<<emp_nm<<"        ";cout<<salary<<endl;}
};

int main()
{int id,sal; char nm[30];
Salary S[5];
for(int i=0;i<5;i++)
 {cout<<"Enter id, name and, salary for emp "<<i+1<<endl;
  cin>>id;cin>>nm;cin>>sal;
  S[i]=Salary(id,&nm[30],sal);}

int flag=S[0].max(&S[5],5);

cout<<"Enployee Id        Name          Employee"<<endl;

S[flag].disp();
return 0;
}
