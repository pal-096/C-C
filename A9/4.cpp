#include<iostream>
#include<string.h>
using namespace std;

class String{
 char *str;
 int len;
public:
 String(){}
 String(char *s)
  {
   len=strlen(s);
   str=new char[len+1];
   strcpy(str,s);
  }
 String operator +(String S)
 {String t;
  t.len=len+S.len;
  t.str=new char[t.len+1];
  strcat(t.str,str);
  strcat(t.str,S.str);
  return t; }

 String operator ==(String S)
 {if(strcmp(str,S.str)==0)
   cout<<"Same string\n"; 
  else cout<<"Not same string\n";
 }
 void disp()
  {cout<<str<<endl;}};

int main()
{ String S1("Ram"),S2("Shyam"),S3,S4("Ram");
  S3=S1+S2;
  S3.disp();
  S1==S2;
  S1==S4;
  return 0;
}
