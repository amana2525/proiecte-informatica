#include <iostream>

using namespace std;
int main()
{   int x,nr=0,c,i,nr1=0,c1,ap[10];
    cin>>x;

    ap[0]=0;
    ap[1]=0;
    ap[2]=0;
    ap[3]=0;
    ap[4]=0;
    ap[5]=0;
    ap[6]=0;
    ap[7]=0;
    ap[8]=0;
    ap[9]=0;
    while(x)
    {
        c=x%10;
        ap[c]++;
        x=x/10;
        cout<<"c "<<c<<endl;
        cout<<"apc "<<ap[c]<<endl;
    }

    for(i=0;i<=9;i++)
    {

     {cout<<"api"<<ap[i]<<endl;
     while(ap[i])
     {nr=nr*10+i;
     ap[i]--;}}

    }
    cout<<"nr init "<<nr<<endl;
    while(nr)
    {c1=nr%10;
      nr1=nr1*10+c1;
      nr=nr/10;
    }
    cout<<"nr e "<<nr1;
    return 0;
}
