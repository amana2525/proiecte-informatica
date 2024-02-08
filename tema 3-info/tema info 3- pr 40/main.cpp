#include <iostream>

using namespace std;
int main()
{
    int n,s1,s=0,j=0,k=0;
    cin>>n;
    while(n)
    { s=s+n%10;
      n=n/10;
      j++;
    }
    s1=s;
    while(s>9)
    { cout<<"9";
        k++;
        s=s-9;
    }
    cout<<s;
    while(k<j-1)
    {
        cout<<"0";
        k++;
    }
    return 0;
}
