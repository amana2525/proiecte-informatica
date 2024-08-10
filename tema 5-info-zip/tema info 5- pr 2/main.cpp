#include <iostream>
#include<cmath>
using namespace std;

int main()
{   int i,n,s=0;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {if(n%i==0&&i%2==1)
     s+=i;
     if(i!=n/i&&(n/i)%2==1)
     s+=n/i;
     
    }
    cout<<s;
    return 0;
}
