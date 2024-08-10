#include <iostream>

using namespace std;

int main()
{   int x,nr,q=0,k=0;
    cin>>x;
    while(x)
    {nr=(x%100-x%10)/10;
    if(x%10>nr)
    {q++;}
    x=x/10;
    k++;
    }
    if(k==q)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
