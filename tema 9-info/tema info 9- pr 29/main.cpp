#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin>>n;
    int n1=n,a,b,k=0,p=1,nr=0,n2=0;
    while(n)
    {n/=10;
     k++;
    }
    for (int i=1;i<=k/2;++i)
        p*=10;
    if (k%2==0)
    {
        b=n1%p;
        a=n1/p;
        nr=b*p+a;
    }
    else if (k%2==1)
    {
        b=n1%p;
        a=n1/(p*10);
        n2=(n1%(p*10)-b)/p;
        nr=b*10*p+n2*p+a;
    }
    cout<<nr;
    return 0;
}
