#include <iostream>

using namespace std;

int main()
{
    int x=3;
    cout<<"(2;3)";
    while(x<=98)
    {
        int s=0;
        for(int d=2; d<x+2; d++)
        {
            if((x+2)%d==0)
            {
                s=s+1;
            }
        }
        if(s==0)
        {
            cout<<" ("<<x<<";"<<x+2<<")";
        }
        else
        {
            x=x+2;
        }
        x=x+2;
    }
    return 0;
}
