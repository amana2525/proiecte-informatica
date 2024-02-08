#include <iostream>

using namespace std;

int main()
{
    int n,c,s=0,max=0;
    cin>>n;
    while(n)
    {
        c=n%10; n=n/10;
        if(c>max)
        {max=c;
        s=s+c;}
    }
    cout<<s;
    return 0;
}
