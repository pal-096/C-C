#include<iostream>
using namespace std;

class Number{
  int num;
 public:
  Number(){num=0;}
  Number(int a){num=a;}
  void disp(){cout<<num<<endl;}
  friend Number operator +(int,Number);
   
};

Number operator +(int N1,Number N2)
{Number temp;
    temp.num=N1+N2.num;
    return temp;
   }

int main()
{
  Number num1(20),num2;
  num2=10+num1;
  cout<<"Sum is: ";
  num2.disp();
  return 0;
}
