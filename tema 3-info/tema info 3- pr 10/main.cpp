#include <iostream>

using namespace std;

int main()
{
    int n,c,n1;
    cin>>n;
    while(n)
    {
       c=n%10;
       if(c==0)
       {n=n/10;}
        if(c!=0)
        {
         n1=n;
         n=0/10;
        }
    }
    cout<<n1;
    return 0;
}
