#include <iostream>

using namespace std;

int main()
{
    int n,n1=0,n2=0,n3=0,n4=0;
    cin>>n;
    n1=n/10;
    while(n1)
    {n2=n2*10+n1%10;
     n1/=10;
    }
    n3=n%1000/10;
    n2=(n%10*100+n3)*10+n2%10;
    cout<<n2<<endl;
    while(n3)
    {n4=n4*10+n3%10;
     n3/=10;
    }

    n3=(n/1000*100+n4)*10+n%10;
    cout<<n3;
    return 0;
}
