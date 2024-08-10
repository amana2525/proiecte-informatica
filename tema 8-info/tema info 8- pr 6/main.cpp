#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,n,d,k=0;
    cin>>n;
    a=2;
    while(n)
    {k=0;

     for(d=2;d<=sqrt(a);d++)
     {if(a%d==0)
      k++;
     }

     if(k==0)
     {cout<<a<<" ";
      n--;}
      a++;
    }
    return 0;
}
