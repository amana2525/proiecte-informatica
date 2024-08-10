#include <iostream>

using namespace std;

int main()
{   int s,a,b,c;
    cin>>s>>a>>b>>c;
    if(a%10==2)
     s=s+a/10;
     else
     s=s-a/10;

     if(b%10==2)
     s=s+b/10;
     else
     s=s-b/10;

     if(c%10==2)
     s=s+c/10;
     else
     s=s-c/10;
    cout<<s<<endl;
    if(s==0)
    cout<<"Nu sunt destui bani in banca";
    return 0;
}
