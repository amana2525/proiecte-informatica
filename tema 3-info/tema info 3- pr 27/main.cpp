#include <iostream>

using namespace std;

int main()
{
    int n,i,a,c,k=0,q=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
     cin>>a;
     while(a)
     {
       c=a%10;
       a=a/10;
       k++;
     }
     if(k%2==1)
     q++;
    }
    cout<<q;
    return 0;
}
