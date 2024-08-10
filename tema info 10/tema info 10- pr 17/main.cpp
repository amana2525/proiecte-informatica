#include <iostream>

using namespace std;

int main()
{
    int n,i,a,a1,s;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
     a1=a;
     s=0;
     while(a)
     {s=a%10;
      a/=10;
     }
     if(s%3==0)
     cout<<a1<<" ";
    }
    return 0;
}
