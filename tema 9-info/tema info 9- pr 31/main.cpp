#include <iostream>

using namespace std;

int main()
{
    int x,y,r;
    cin>>x>>y;
    int x1=x,y1=y;
    while(y)
    {r=x%y;
     x=y;
     y=r;
    }
    cout<<x<<endl;
    while(x1!=y1)
    {if(x1>y1)
     x1=x1-y1;
     else
     y1=y1-x1;
    }
    cout<<x1;
    if(x1==1)
    cout<<"SUNT PRIME INTRE ELE";
    return 0;
}
