#include <iostream>

using namespace std;

int main()
{
    int x,y,x1=0,x2=0;
    cin>>x>>y;
    while(x&&y)
    {
        x1=x1*100+(x%10)*10+y%10;
        x=x/10;
        y=y/10;
        if(x==0)
        { while(y)
        { x1=x1*10+y%10;
          y/=10;
        }
        }
        if(y==0)
        {
            while(x)
            {
              x1=x1*10+x%10;
              x/=10;
            }
        }
    }
    cout<<"z= "<<x1;
    return 0;
}
