#include <iostream>

using namespace std;

int main()
{
    int n,i,s=0,s1=0,s2=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {s=s+i;
    }
    for(i=2;i<=2*n;i=i+2)
    {s1=s1+i;
    }
    for(i=1;i<=2*n;i=i+2)
    {s2=s2+i;
    }
    cout<<s<<" "<<s1<<" "<<s2;
    return 0;
}
