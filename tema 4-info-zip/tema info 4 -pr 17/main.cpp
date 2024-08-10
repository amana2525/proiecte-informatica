#include <iostream>

using namespace std;

int main()
{
    int n,n1,k,i=0,q=0,nr1=0,nr2=0,nr3=0,nr4=0,c,c1,c2,c3;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    n1=n;
    while(n)
    {k=k;
    c=n%10;
    n=n/10;
    i++;
    if(k!=i)
    nr1=nr1*10+c;
    }
    while(nr1)
    {
      c1=nr1%10;
      nr1/=10;
      nr2=nr2*10+c1;
    }
    cout<<"de la dreapta nr da "<<nr2<<endl;
    while(n1)
    {c2=n1%10;
    n1/=10;
    q++;
    if(q!=i-k+1)
    nr3=nr3*10+c2;
    }
    while(nr3)
    {c3=nr3%10;
     nr4=nr4*10+c3;
     nr3/=10;
    }
    cout<<"de la stanga nr da "<<nr4<<endl;
    return 0;
}
