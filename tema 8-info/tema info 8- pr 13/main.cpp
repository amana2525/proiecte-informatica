#include <iostream>

using namespace std;

int main()
{
    int a,b,a1,b1;
    cin>>a>>b;
    a1=a;
    b1=b;
    while(a!=b)
    {if(a>b)
     a=a-b;
     else
     b=b-a;
    }
    cout<<a1*b1/a;
    return 0;
}
