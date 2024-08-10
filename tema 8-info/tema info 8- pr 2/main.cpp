#include <iostream>

using namespace std;

int main()
{
    int n,i,a,b,q,s=0,k=0,max=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a>>b;
     q=(a+b)/2;
     s=s+q;
     if(q<5)
     k++;
     if(q>max)
     max=q;
    }
    cout<<s/n<<" media"<<endl;
    cout<<k<<" nr corigenti"<<endl;
    cout<<max<<" max";
    return 0;
}
