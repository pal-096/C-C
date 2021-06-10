#include<iostream>
using namespace std;

class A{
  int X;
 public:
  A(){X=0;}
  A(int a){X=a;}
  friend class B;};

class B{
  int Y;
 public:
  B(){Y=0;}
  B(int a){Y=a;}
  void sum(A A1,B B1){
  Y=A1.X+B1.Y;}
  void disp()
  {cout<<Y<<endl;}};

int main()
{
A A1(2);
B B1(3);
B B2;
B2.sum(A1,B1);
B2.disp();
return 0;
}
