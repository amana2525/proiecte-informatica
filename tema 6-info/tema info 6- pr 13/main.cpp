#include <iostream>

using namespace std;

int main()
{
    int a,n,min=9999,max=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {cin>>a;
     if(a>max)
        max=a;
     if(a<min)
        min=a;
    }
    if(min==max && min==0)
        cout<<-1;
    else{
        while(max)
        {int r=min%max;
            min=max;
            max=r;
        }}
        cout<<min<<endl;
    return 0;
}
