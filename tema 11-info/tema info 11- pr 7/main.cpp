#include <iostream>

using namespace std;

int main()
{
    int n,c,nr=0,nr1=0;
    cin>>n;
    while(n)
    {c=n%10;
     n/=10;
     if(c%2==0)
     nr=nr*10+c;
    }
    while(nr)
    {c=nr%10;
     nr/=10;
     nr1=nr1*10+c;
    }
    cout<<nr1;
    return 0;
}
