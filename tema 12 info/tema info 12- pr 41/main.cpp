#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z;
    cout<<"n="; cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Tripletul "<<i<<endl;
        cin>>x>>y>>z;
        int x1=x, y1=y, z1=z;
        while(x!=y)
        {
            if(x>y)
            {
                x=x-y;
            }
            else
            {
                y=y-x;
            }
        }
        while(x!=z)
        {
            if(x>z)
            {
                x=x-z;
            }
            else
            {
                z=z-x;
            }
        }
        int k=0;
        for(int d=1; d<=x; d++)
        {
            if(x%d==0)
            {
                k=k+1;
            }
        }
        if(k==4)
        {
            cout<<"("<<x1<<";"<<y1<<";"<<z1<<")"<<endl;
        }
    }
    return 0;
}
