#include <iostream>

using namespace std;

int main()
{
    int x,y,n,m;
    cin>>x>>y>>n>>m;
    int c1=x+y-2;
    int c2=x-1+m-y;
    int c3=y-1+n-x;
    int c4=m-y+n-x;
    cout<<max(max((c1,c2),(c3,c4)));
    return 0;
}
