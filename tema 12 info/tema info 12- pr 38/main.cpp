#include <iostream>

using namespace std;

int main()
{
    int n, x, k, max=0;
    cout<<"n="; cin>>n;
    cout<<"k="; cin>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        int x1=0, y=x;
        while(x!=0)
        {
            x1=x1*10+x%10;
            x=x/10;
        }
        x=x1;
        for(int j=1; j<k; j++)
        {
            x=x/10;
        }
        if(x%10==2 || x%10==3)
        {
            if(y>max)
            {
                max=y;
            }
        }
    }
    cout<<max;
    return 0;
}
