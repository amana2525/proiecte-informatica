
   #include <iostream>

using namespace std;

int main()
{
    int n,i,a,min=99999999;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
    if(a<min)
            min=a;}
    cout<<min<<" e minimul";
    return 0;
}


