#include <iostream>

using namespace std;

int main()
{
    int n,c,s=0;
    cin>>n;
    while(n)
    {
        c=n%10;
        n=n/10;
        if(c>=3 && c<=7)
        s=s+c;
    }
    cout<<s;
    if(s==0)
    cout<<"Nu are cifre intre 3 si 7";

    return 0;
}
