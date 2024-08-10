#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,d,k=0;
    cin>>n;
    for(d=1;d<=sqrt(n);d++)
    { if(n%d==0)
      k++;
      if(d!=sqrt(n))
      k++;
    }
    if(k%2==1)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
