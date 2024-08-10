#include <iostream>

using namespace std;

int main()
{
    int n,i,s=0,max=0,min=10,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
     if(a>max)
     {max=a;}
     if(a<min)
    {min=a;}
     s=s+a;
    }
    s=s-min-max;
    cout<<s/n;
    return 0;
}
