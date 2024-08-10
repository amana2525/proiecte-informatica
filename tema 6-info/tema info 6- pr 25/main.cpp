#include <iostream>
using namespace std;
int main(){
    int a,b;
    long long s = 0;
    cin >> a >> b;
    for(int i = a; i <= b; ++i){
        int n = i, cntp = 0, cnti = 0;
        while(n){
            if(n % 2 == 0)
                cntp++;
            else
                cnti++;
            n/=10;
        }
        if(cntp == cnti)
            s += i;
    }
    cout << s;
    return 0;
}
