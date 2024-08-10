#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,x,k=0,p,d,s=0;
    cin>>n>>p;
    for(i=1;i<=n;i++)
    {cin>>x;
     k=0;
        for(d=1; d<=sqrt(x); d++)
        {if(x%d==0)
            {k++;
                if(d!=x/d)
                {k++;
                }
            }
        }
        if(k>=p)
        {s=s+x;
        }
    }
    cout<<s;
    return 0;
}
