/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>

using namespace std;
int main()
{ int a,b,c,k=0;
  cout<<"a="; cin>>a;
  cout<<"b="; cin>>b;
  cout<<"c="; cin>>c;
  
  if(a%2==0)
  ++k;
  
  if(b%2==0)
  ++k;
  
  if(c%2==0)
  ++k;
 
  
  if(k>=2)
  cout<<"PARE";
  else
  cout<<"IMPARE";
  return 0;
}
