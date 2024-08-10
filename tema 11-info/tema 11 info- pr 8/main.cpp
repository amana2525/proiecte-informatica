#include <iostream>

using namespace std;
int fr[10];
int main()
{
    int n,c,nr=0,i;
    cin>>n;
    while(n)
    {c=n%10;
     n/=10;
     fr[c]++;
    }
    for(i=9;i>=0;--i)
    { while(fr[i])
      {nr=nr*10+i;
       fr[i]--;}
    }
    cout<<nr;
    return 0;
}
