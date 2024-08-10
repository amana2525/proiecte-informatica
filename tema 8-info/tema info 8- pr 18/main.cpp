#include <iostream>

using namespace std;

int main()
{
    int n,c,i=0,nr=0;
    cin>>n;
    while(n)
    {c=n%10;
     i++;
     n/=10;
     if(i%2==1)
     nr=nr*10+c;
    }
    cout<<nr;
    return 0;
}
