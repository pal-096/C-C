#include<iostream>
using namespace std;

class Number{
  int num;
 public:
  Number(){num=0;}
  Number(int a){num=a;}
  void disp(){cout<<num<<endl;}
  Number operator +(Number N)
   {Number temp;
    temp.num=N.num+num;
    return temp;
   }
};

int main()
{
  Number num1(10),num2(20),num3;
  num3=num1+num2;
  cout<<"Sum is: ";
  num3.disp();
  return 0;
}
