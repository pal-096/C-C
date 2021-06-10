#include<iostream>

using namespace std;
class Fraction
{int n,d;
 public:
  Fraction(){n=1;d=1;}
  Fraction(int a,int b){n=a;d=b;}
  void operator ++()
{n=n+d;
cout<<n<<'/'<<d;}
};

int main()
{
  Fraction F;
  int x,y;
  cout<<"Enter a numerator and denominator: ";
  cin>>x>>y;
  F=Fraction(x,y);
  cout<<"Incremented value is: ";++F;
cout<<endl;
return 0;
}
