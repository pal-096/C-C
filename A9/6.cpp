#include<iostream>
using namespace std;

class Number{
  int num;
 public:
  Number(){num=0;}
  Number(int a){num=a;}
  void disp(){cout<<num<<endl;}
  void operator =(Number N)
  {num=N.num;cout<<"In overloaded operator\n";}
  Number(Number &N)
  {num=N.num;cout<<"In copy constructor\n";}
};

int main()
{
  Number num1(10),num2;
  num2=num1;
  cout<<"num1= ";num1.disp();	
  cout<<"num2= ";num2.disp();
  return 0;
}
