#include <iostream>

using namespace std;

int main()
{
    int n,n1,nr=1,nr1=0;
    cin>>n;
    n1=n;
    while(n)
    { if(n%2==0)
      nr=nr*10;
      else
      nr=nr*10+1;
      n/=2;
    }
    while(nr)
    {nr1=nr1*10+nr%10;
     nr/=10;
    }
    cout<<nr1/10;
    return 0;
}
