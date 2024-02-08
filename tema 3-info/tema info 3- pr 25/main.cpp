#include <iostream>

using namespace std;

int main()
{
    int n,c,c1,k=0, n1;
    cin>>n;
    n1=n;
    while(n>9)
    {c=n%10;
    n=n/10;}
    while(n1)
    {
       c1=n1%10;
       n1=n1/10;
       if(c1<c)
        k++;
    }
    cout<<k;
    return 0;
}
