#include<iostream>
using namespace std;

class Complex{
  int real;
  int img;
 public:
  Complex(){real=0;img=0;}
  Complex(int a,int b){real=a;img=b;}
  void complex_sum(Complex Z1, Complex Z2)
  {real=Z1.real+Z2.real;
   img=Z1.img+Z2.img;}
  void disp()
   {cout<<real<<"+ i"<<img;}
};

int main()
{int x,y; Complex Z1,Z2,Z3;
cout<<"Enter real and imaginary part of first complex number: ";
cin>>x>>y;
Z1=Complex(x,y);
cout<<"Enter real and imaginary part of second complex number: ";
cin>>x>>y;
Z2=Complex(x,y);
cout<<endl<<"The sum is ";
Z3.complex_sum(Z1,Z2);
Z3.disp()	;
cout<<endl;
return 0;
}
