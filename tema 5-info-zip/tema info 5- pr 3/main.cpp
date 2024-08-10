#include <iostream>
#include<cmath>
using namespace std;

int main()
{   int i,n,s=0,a;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {if(n%i==0&&i%2==0)
     s+=i;
     if(i!=n/i)
     {a=n/i;
     if(a%2==0)
     s+=n/i;}

    }
    cout<<s;
    return 0;
}
