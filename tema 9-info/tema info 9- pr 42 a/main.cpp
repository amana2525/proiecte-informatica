#include <iostream>

using namespace std;

int main()
{
    int x,d,s=1;
    cin>>x;
    for(d=2;d*d<=x;++d)
    {if(x%d==0)
     {s+=d;
      s+=x/d;
     }
     if(d*d==x)
     s-=d;
    }
    if(s==x)
    cout<<"e perfect";
    else
    cout<<"nu e perfect";
    return 0;
}
