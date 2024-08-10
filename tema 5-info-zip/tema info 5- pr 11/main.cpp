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
        if(d!=n/d)
        {k++;}}}
    if(k%2==1)
    {cout<<"Are nr. impar de divizori.";
    }
    if(k%2==0)
    {
        cout<<"Nu are nr. impar de divizori.";
    }
}
