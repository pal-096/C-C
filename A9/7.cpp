#include<iostream>
using namespace std;

class Number{
  int num;
 public:
  Number(){num=0;}
  Number(int a){num=a;}
  void disp(){cout<<num<<endl;}
  int fact(){int a=1;
   for(int i=1;i<=num;i++)
      a*=i;
    return a;}

  friend istream& operator >>(istream&, Number&);
  friend ostream& operator <<(ostream&, Number);
};

istream& operator >>(istream &in, Number& N)
   {
    in>>N.num;
   
   }

ostream& operator <<(ostream &out, Number N)
   {
    out<<N.num;
   
   }

int main()
{
  Number N;
  cin>>N;
  cout<<N;
  cout<<"\nFactorial is: "<<N.fact();	
  cout<<endl;
  return 0;
}
