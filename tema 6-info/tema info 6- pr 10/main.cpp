#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b && a==0)
        cout << -1;
    else{
        while(b)
        {int r=a%b;
            a=b;
            b=r;
        }
        if(a==1)
        cout<<"DA";
        else
        cout<<"NU";
    }
    return 0;
}
