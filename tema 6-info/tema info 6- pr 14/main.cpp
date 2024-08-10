#include <iostream>

using namespace std;

int main()
{
    int n,t=0;
    cin>>n;
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        int x1=x, og=0;
        while(x){
            og=og*10+x%10;
            x/=10;
        }
        int a=og,b=x1;
        while(b){
            int r=a%b;
            a=b;
            b=r;
        }
        if(a==1)
        t++;
    }
    cout<<t;
    return 0;
}
