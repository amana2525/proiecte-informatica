#include <iostream>

using namespace std;

int main()
{
    int n,i,a,k=0,min=999;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
     if(a<min)
     {min=a;
     k=1;}
     else if(a==min)
     k++;
    }
    cout<<min<<" de "<<k<<" ori";
    return 0;
}
