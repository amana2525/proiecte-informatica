#include <iostream>

using namespace std;

int main()
{
    int a,n,p,i,i1,max=0;
    cin>>n;
    while(n)
    {if(n>=max)
     max=n;
     cin>>n;
    }
    p=0;
    int min=99999;
    while(p==0)
    {for(i=max+1;i<=99999;i++)
     { a=0;
       i1=i;
       while(i1)
       {a=a*10+i1%10;
        i1=i1/10;
       }
       if(i==a&&i<min)
       {p=1;
        min=i;
       }
    }
    }
    cout<<min;
    return 0;
}
