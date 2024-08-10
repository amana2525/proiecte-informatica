#include <iostream>

using namespace std;

int main()
{
    int a,b,a1,b1;
    cin>>a>>b;
    a1=a;
    b1=b;
    if(a==b && a==0)
        cout << -1;
    else{
        while(b)
        {int r=a%b;
            a=b;
            b=r;
        }
        cout<<b1/a<<" note de 10 la informatica"<<endl;
        cout<<a1/a<<" note de 10 la matematica";
    }
    return 0;
}
