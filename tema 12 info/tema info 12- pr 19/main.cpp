#include <iostream>

using namespace std;

int main()
{ int n, x, y, z, k=0, max=0, min=10, i, c;
   cout << "n="; cin>>n;
   for (i=1; i<=n; i++)
   {
       cout << "x="; cin>>x;
       cout << "y="; cin>>y;
       cout << "z="; cin>>z;
       while (y!=0)
       {
           c=y%10;
           y=y/10;
           if (c>max)
            max=c;
       }
       while (z!=0)
       {
           c=z%10;
           z=z/10;
           if (c<min)
            min=c;
       }
       if (x==min+max)
        k++;
   }
   cout << k;
    return 0;
}
