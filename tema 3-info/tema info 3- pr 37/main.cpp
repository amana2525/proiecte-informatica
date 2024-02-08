#include <iostream>

using namespace std;

int main()
{
    int n, nr;
    cin>>n;
    while(n>9)
    {nr=n%100;
    n=n/10;
    }
    cout<<nr<<endl;
    cout<<nr%10+(nr%100-nr%10)/10;
    return 0;
}
