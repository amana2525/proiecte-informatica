#include <iostream>

using namespace std;

int main()
{
    int n,c,max=0,k=0;
    cin>>n;
    while(n)
    {c=n%10;
     n=n/10;
     if(c>max)
     {max=c;
     k=1;}
     else if(c==max)
     k++;
    }
    cout<<max<<" apare de "<<k<<" ori ";
    return 0;
}
