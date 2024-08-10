#include <iostream>

using namespace std;

int main()
{
    int n, x=1;
    cout<<"n="; cin>>n;
    while(n!=0)
    {
        int x1=x, a=0;
        while(x!=0)
        {
            a=a+x%10;
            x=x/10;
        }
        int s=0;
        for(int d=1; d<=a; d++)
        {
            if(a%d==0)
            {
                s=s+d;
            }
        }
        if(s==(a*2))
        {
            cout<<x1<<" ";
            n=n-1;
        }
        x=x+1;
    }
    return 0;
}
