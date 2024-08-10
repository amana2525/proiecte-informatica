#include <iostream>

using namespace std;

int main()
{
    int n,p,m,k,a,b;
    cin>>n>>k>>m>>p;
    a=n*k;
    b=m*p;
    if(a==b && a==0)
        cout<<-1;
    else{
        while(b)
        {int r=a%b;
            a=b;
            b=r;
        }
        cout<<a;
    }
    return 0;
}
