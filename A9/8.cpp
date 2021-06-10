#include<iostream>
using namespace std;

class Number{
  int num;
 public:
  Number(){num=0;}
  Number(int a){num=a;}
  int check(){
  if(num>=10) 
     return 1;
   else 
    return 0;
   }
  void disp(){cout<<num<<endl;}
  void operator ++(int)
  {num++;
   cout<<num<<endl;}
  void operator --()
  {--num; cout<<num<<endl;}
};

int main()
{ int a,flag;
  cout<<"Enter a number: ";cin>>a;
  Number num1(a);
  flag=num1.check();
  if(flag==1)
   num1++;
  else if(flag==0)
  --num1;
  return 0;
}
