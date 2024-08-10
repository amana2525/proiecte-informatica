#include <iostream>

using namespace std;

int main ()
{
    int n;
    int m;
    cin>>n>>m;
    int s=0, u=0;
    for (int i=1; i*i<=n;++i)
    {if(n%i==0)
        {s+=i;
         s+=(n/i);
        }
        if (i*i==n)
        s-=i;
    }
    s-=n;
    for(int i=1;i*i<=m;++i)
    {
        if (m%i==0)
        {u+=i;
        u+=(m/i);
        }
        if(i*i==m)
        u-=i;
    }
    u-=m;
    if (s==m && u==n)
    cout << "PRIETENE";
    else
    cout << "NU SUNT PRIETENE";
    return 0;
}
