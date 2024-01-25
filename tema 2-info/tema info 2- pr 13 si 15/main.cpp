#include <iostream>

using namespace std;

int main()
{
    int n,i,a,b,max=0,min=999999,maxi=0,mini=0,s;
    cin>>n;
    for(i=1;i<=n/2;i++)
    { cin>>a;
    cin>>b;
    if(a>b)
    { s=a-b;}
    else
    {s=b-a;}

    if(s>max)
    {max=s;
    maxi=i;}
    if(s<min)
      {min=s;
      mini=i;}
    }

    cout<<maxi<<" e perechea cu maximul, iar "<<mini<<" e perechea cu minimul de diferenta de inaltime";

    return 0;
}
