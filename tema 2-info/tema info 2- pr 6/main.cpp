#include <iostream>

using namespace std;

int main()
{
    int n, min=99999999;
    cin>>n;
    while(n)
    {
       if(n>0 && n<min)
        {min=n;}
       cin>>n;
    }
    cout<<min<<" e minimul";

    return 0;
}
