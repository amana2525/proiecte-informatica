#include <iostream>

using namespace std;

int main()
{
    int a,b,c,s=0;
    cin>>a>>b;
    while(a)
    {
        c=a%10;
        a=a/10;
        if(b%c!=0)
        s=s+c;
    }
    cout<<s;
    return 0;
}
