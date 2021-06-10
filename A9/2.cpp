#include<iostream>
using namespace std;

class Number{
  int num;
 public:
  Number(){num=0;}
  Number(int a){num=a;}
  void disp(){cout<<num<<endl;}
  Number operator +(int N)
   {Number temp;
    temp.num=num+N;
    return temp;
   }
};

int main()
{
  Number num1(10),num2;
  num2=num1+10;
  cout<<"Sum is: ";
  num2.disp();
  return 0;
}
