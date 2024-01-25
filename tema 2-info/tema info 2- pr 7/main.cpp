#include <iostream>

using namespace std;

int main()
{
    int n,i,a,max=0,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
    if(a>max)
    {max=a;
    k=1;}
    else
    {if(a==max)
        {k++;}
    }
    }
    cout<<max<<" de "<<k<<" ori";
    return 0;
}
