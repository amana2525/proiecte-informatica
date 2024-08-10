#include <iostream>

using namespace std;

int main()
{
    int n,k=0,n1;
    cin>>n;
    while(n)
    {cin>>n1;
     int n2=n1;
     if(n==n1 && n==0)
     cout<<-1;
     else
     {while(n1)
     {int r=n%n1;
     n=n1;
     n1=r;
        }
     if(n==1)
     k++;
     n=n2;
    }}
    cout<<k;
    return 0;
}
