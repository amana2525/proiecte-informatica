#include <iostream>

using namespace std;

int main()
{
    int n,c,nr=0,nr1=0;
    cin>>n;
    while(n)
    {c=9-n%10;
     n=n/10;
     nr=nr*10+c;
    }
    while(nr)
    {
        nr1=nr1*10+nr%10;
        nr/=10;
    }
    cout<<nr1;
    return 0;
}
