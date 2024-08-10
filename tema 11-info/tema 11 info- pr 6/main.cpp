#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,delta;
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    if(delta>0)
    { cout<<"x1="<<(-b-sqrt(delta))/(2*a)<<endl;
      cout<<"x2="<<(-b+sqrt(delta))/(2*a)<<endl;
    }
    if(delta==0)
    { cout<<"x="<<(-b)/(2*a)<<endl;
    }
    else
        cout<<"nu are solutii";

    return 0;
}
