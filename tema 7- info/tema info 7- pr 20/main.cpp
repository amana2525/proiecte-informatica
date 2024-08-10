#include <iostream>

using namespace std;

int main()
{
    int n,s=0,n1;
    cin>>n;
    while(n)
    {n1=n;
     if(n>9)
     {while(n1>99)
     {n1/=10;
     }
     s=s+n1;}
     cin>>n;
    }
    cout<<s;
    return 0;
}
