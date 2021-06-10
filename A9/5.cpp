#include<iostream>
using namespace std;

class Number{
  int num;
 public:
  Number(){num=0;}
  Number(int a){num=a;}
  void operator >(Number N)
   {if(num>N.num)
    cout<<num<<endl;
    else cout<<N.num<<endl;
   }
  void disp(){cout<<num<<endl;}
};

int main()
{
  Number num1(10),num2(20);
  num1.disp();
  num2.disp();
  cout<<"Greater number is: ";
  num1>num2;
  return 0;
}
