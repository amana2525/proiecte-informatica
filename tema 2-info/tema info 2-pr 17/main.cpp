#include <iostream>

using namespace std;

int main()
{
    int n,i,p,q,m,s1=0,s,a,b,min=9999,oferta=0;
    cin>>n>>s>>m;
    for(i=1;i<=n;i++)
    { cin>>p;
      s1=s1+p;}
    for(q=1;q<=m;q++)
    { cin>>a; //pret
      cin>>b; //putere
      if(b>=s1)
      { if(a<min && s>min)
        oferta=q;
      }
    }
    cout<<" luam oferta "<<oferta<<".";
    if(oferta==0)
    cout<<" Nu ai destuli bani";
    return 0;
}
