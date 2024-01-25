#include <iostream>

using namespace std;

int main()
{
    int n,a,i,min1=99999,min2=99999,min3=99999;
    cin>>n;
    for(i=1;i<=n;i++)
    { cin>>a;
    if(a<min1)
      {min3=min2;
      min2=min1;
      min1=a;}
    else
    { if(a<min2)
      {min3=min2;
      min2=a;}
    else
    { if(a<min3)
      min3=a;
    }
    }
    }
    cout<<min1<<" "<<min2<<" "<<min3;
    return 0;
}
