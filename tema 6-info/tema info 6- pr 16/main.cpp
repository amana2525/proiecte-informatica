
#include <bits/stdc++.h>
using namespace std;
ifstream cin("aoc2020.in");
ofstream cout("aoc2020.out");
int multiplu = 400001;
int cmmdc(int a,int b){
    while(b){
        int r =a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int a,b;
    cin>>multiplu;
    for(int i=2;i<=n;++i){
        cin>>b;
        multiplu = multiplu / cmmdc(multiplu,b)*b;
    }
    cout<<multiplu;
    return 0;
}
