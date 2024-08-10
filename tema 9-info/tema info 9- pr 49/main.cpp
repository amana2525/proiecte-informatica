#include <iostream>

using namespace std;

int main()
{
    int a,b,n,n1,k=0,n2=0;
    cin>>a>>b;
    for(n=a;n<=b;++n)
    {n1=n;
    n2=0;
     while(n1)
     {n2=n2*10+n1%10;
      n1/=10;
     }
     if(n==n2)
     {cout<<n<<" ";
     k++;}
    }
    if(k==0)
    cout<<"nu";
    return 0;
}
