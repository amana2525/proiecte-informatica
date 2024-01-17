/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;
    if(a<=b && a<=c)
    cout<<a;
     if(b<=c && b<=a)
    cout<<b;
     if(c<=b && c<=a)
    cout<<c;
    return 0;
}
