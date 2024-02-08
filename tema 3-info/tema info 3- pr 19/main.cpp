#include <iostream>

using namespace std;

int main()
{
    int n, n1,c,s=0,s1=0,s2=0,p=1,c1,c2,k=0;
    cin>>n;
    n1=n;
    while(n)
    {
     c=n%10;
     n=n/10;
     s=s+c*c;
     if(c%2==1)
     s1=s1+c;
     if(c%3==0)
        s2=s2+c;
     if(c>5)
     k++;
     if(c!=0)
        p=p*c;
    }
    c2=n1%10;
    while(n1>9)
    {
      c1=n1%10;
      n1=n1/10;
    }
    cout<<s<<" "<<s1<<" "<<s2<<" "<<k<<" "<<p<<" "<<c1+c2;
    return 0;
}
