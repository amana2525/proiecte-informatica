#include <iostream>

using namespace std;

int main()
{
    int n,c,c1,k=0,q=0,l=0;
    cin>>n;
    while(n)
    {c=n%10;
     c1=(n%100-n%10)/10;
     n/=10;
     k++;
     if(c1-c>=1)
     q++;
     else if(c>c1)
     l++;
    }
    if(k-1==q)
    cout<<"Numarul are cifrele ordonate descrescator";
    else if(k==l)
    cout<<"Numarul are cifrele ordonate crescator";
    return 0;
}
