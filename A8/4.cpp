#include<iostream>

using namespace std;
class Number
{int num;
 public:
  Number(){num=0;}
  Number(int a){num=a;}
  void operator ++()
  {++num;}
  void disp(){cout<<num;}
};

int main()
{  Number N;int x;
  cout<<"Enter a number: "; cin>>x;
  N=Number(x);
  ++N;
  cout<<"Incremented value: ";
  N.disp(); cout<<endl;
  return 0;
}
