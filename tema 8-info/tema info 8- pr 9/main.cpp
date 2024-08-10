#include <iostream>

using namespace std;

int main()
{
    int n,i=1,i1,nr=0;
    cin>>n;
    while(nr<n)
    {i1=i+1;
     if(i+i1==n)
     {cout<<"("<<i<<","<<i1<<") ";
      nr++;}
      i++;
    }
    return 0;
}
