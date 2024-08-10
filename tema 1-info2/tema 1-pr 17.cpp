/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>

using namespace std;
int main()
{ int a,b;
cin>>a>>b;
if(b>=a)
if(b%a==0)
 cout<<b/a;
 else
 cout<<b%a;
else
 if(a%b==0)
 cout<<a/b;
 else
 cout<<a%b;
    return 0;

}
