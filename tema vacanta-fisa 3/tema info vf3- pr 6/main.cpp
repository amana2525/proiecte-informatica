#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,p,A;
    cin>>a>>b>>c;
    cout<<a+b+c<<endl;
    p=(a+b+c)/2;
    A=p*(p-a)*(p-b)*(p-c);
    cout<<sqrt(A);
    return 0;
}
