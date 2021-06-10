#include<iostream>
using namespace std;

class Time{
  int hr;
  int min;
  int sec;
 public:
  Time(){hr=0;min=0; sec=0;}
  Time(int a,int b,int c){hr=a;min=b;sec=c;}
  friend Time time_sum(Time, Time);

  void disp()
   {cout<<hr<<" hours "<<min<<" minutes "<<sec<<" seconds"<<endl;}
};

Time time_sum(Time T1,Time T2)
  {Time T3;
   T3.sec=T1.sec+T2.sec;
   T3.min=T1.min+T2.min+(T3.sec/60);
   T3.sec%=60;
   T3.hr=T1.hr+T2.hr+(T3.min/60);
   T3.min%=60; return T3;}

int main()
{
  Time T1(2,45,45),T2(3,30,45);
  T1.disp();
  T2.disp();
  Time T3=time_sum(T1,T2);
  cout<<"Sum is: ";
  T3.disp();  
  return 0;
}
