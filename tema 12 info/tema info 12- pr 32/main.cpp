#include <iostream>

using namespace std;

int main()
{
    int n,i,a,a1,b1,b,k;
    cin>>n;
    cin>>a;
    for(i=2;i<=n;i++)
    {cin>>b;
     k=0;
     a1=a;
     b1=b;
     while(a1%2==0)
     a1/=2;
     if(a1==1)
     ++k;
     while(b1%5==0)
     b1/=5;
     if(b1==1)
     ++k;
     if(k==2)
     cout<<a<<" "<<b<<"  ";
     a=b;
    }
    return 0;
}
