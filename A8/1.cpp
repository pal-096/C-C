#include<iostream>
#include<string.h>
using namespace std;

class Student{
 protected:
  int roll;
  char nm[30];
 public:
  Student(){roll=0;strcpy(nm,"a");}
  Student(int r, char name[30]){cout<<"Para Student\n";roll=r; strcpy(nm,name);cout<<roll;cout<<nm<<endl;}
};

class Mark:public Student{
 protected:
  int mk1,mk2,mk3;
 public:
  Mark(int r, char name[30],int m,int n, int o){cout<<"Para Mark\n";Student(r,&name[30]);mk1=m;mk2=n;mk3=o; cout<<mk1<<mk2<<mk3<<endl;}
  Mark(){mk1=0;mk2=0;mk3=0;}
};

class Result:public Mark{
  float tot;
 public:
  Result()
   {cout<<"Default constructor of class Result\n"; tot=0;}
  Result(int r,char name[30], int m1, int m2, int m3)
   {Mark(r,&name[30],m1,m2,m3); cout<<mk1<<mk2<<mk3;
    tot=mk1+mk2+mk3;}
  void disp(){cout<<roll<<"  ";cout<<nm<<"   "; cout<<tot<<endl;}
};

int main()
{Result R; char name[30]; strcpy(name,"Qwerty"); int r,m1,m2,m3;
R=Result(1,&name[30],20,30,40);
R.disp();
return 0;}
