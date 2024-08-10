#include <iostream>

using namespace std;

int main()
{
    int a,s=0,k=0,c;
    cin>>a;
    while(a)
    {c=a%10;
     a/=10;
     s=s+c;
     ++k;
    }
    cout<<s/k;
    return 0;
}
