#include <iostream>

using namespace std;

int main()
{
    int n,nr1=0,nr=0,nr2=0,nr3=0,c;
    cin>>n;
    while(n)
    {c=n%10;
     n/=10;
     if(c%2==0)
     nr=nr*10+c;
     else
     nr1=nr1*10+c;
    }
    while(nr)
    {nr2=nr2*10+nr%10;
     nr/=10;}

    while(nr1)
    {nr3=nr3*10+nr1%10;
     nr1/=10;}
     cout<<nr2<<endl;
     cout<<nr3<<endl;
    return 0;
}
