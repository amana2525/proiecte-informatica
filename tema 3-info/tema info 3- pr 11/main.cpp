#include <iostream>

using namespace std;

int main()
{
    int n,c,max=0;
    cin>>n;
    while(n)
    {
        c=n%10; n=n/10;
        if(c%2==0 && c>max)
            max=c;

    }
    if(max==0)
        cout<<"10";
    else
        cout<<max;
    return 0;
}
