#include <iostream>

using namespace std;

int main()
{
    int n,c,k=0,b=0,d=0,c1,q=0;
    cin>>n;
    c=n%10;
    while(n)
    {d++;
    n=n/10;
    c1=n%10;
    if(c=c1)
    k++;
    if(c>c1)
    q++;
    if(c<c1)
    b++;
    c=c1;
    }
    if(k=d)
    cout<<"nr cu cifre egale";
    else if(q=d)
         cout<<"nr are cifrele crescatoare";
    else if(b=d)
         cout<<"numarul are cifrele descrescatoare";
    else
        cout<<"nu este niciuna dintre acestea";
    return 0;
}
