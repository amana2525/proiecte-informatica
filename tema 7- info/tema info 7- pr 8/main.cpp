#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,d,k=0;
    cin>>n;
     for(d=1;d<=sqrt(n);d++)
     {if(n%d==0)
     {k++;
      cout<<d<<endl;
      if(n/d!=d)
      k++;
      cout<<n/d<<endl;}}
    cout<<"sunt "<<k<<" divizori";
    return 0;
}
