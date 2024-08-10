#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int a1=a, b1=b;
    if(a==b && a==0)
        cout << -1;
    else{
        while(b)
        {int r=a%b;
            a=b;
            b=r;
        }
        cout<<a<<endl;
        cout<<a1*b1/a;
    }
    return 0;
}
