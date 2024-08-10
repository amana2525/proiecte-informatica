#include <iostream>

using namespace std;

int main()
{
    int n,a,b,n1,k=0;
    cin>>a>>b;
    for(n1=a;n1<=b;++n1)
    {n=n1;
     while(n%2==0)
     n/=2;
     if(n==1)
    {cout<<n1<<" ";
    ++k;}}
    if(k==0)
    cout<<"nu exista";
    return 0;
}
