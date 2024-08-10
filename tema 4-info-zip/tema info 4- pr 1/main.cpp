#include <iostream>

using namespace std;

int main()

{ int x,c,s=0,p=1,k=0;
    cin>>x;
    while(x)
    {
     c=x%10;
     x=x/10;
     s=s+c;
     p=p*c;
     k++;
    }
    cout <<s<<" "<<p<<" "<<k;
    return 0;
}

