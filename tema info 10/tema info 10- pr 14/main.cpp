#include<iostream>

using namespace std;

int main()
{int n,d,ok;
 do
 { cin>>n;
   ok=1;
   if(n==0 || n==1) ok=0;
   else for(d=2;d<=n/2;d++)
            if(n%d==0) ok=0;
   if(ok==0) cout<<"nu e prim"<<endl;
 }
 while(ok==0);
 cout<<n<<endl;
 system("pause");
 return 0;
}
