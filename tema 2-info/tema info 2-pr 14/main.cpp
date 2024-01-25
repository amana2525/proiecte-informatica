#include <iostream>

using namespace std;

int main()
{
    int n,s,p,i,min=999999,mini=0;
    float ma;
    cin>>n>>s;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        if(p<min)
        {min=p;
        mini=i;}
    }
    ma=s/min;
    cout<<"poate lua "<<ma<<" cutii din magazinul "<<mini;
    return 0;
}
