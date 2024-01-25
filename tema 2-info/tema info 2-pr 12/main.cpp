#include <iostream>

using namespace std;
int n, a[100001];
int main(){
    cin >> n;
    int maxi = 0, cnt = 0;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int j = 1; j <= n/2; j++)
        if(a[j] > maxi)
            maxi = a[j];
    for(int i = n/2 + 1; i <= n; ++i)
        if(maxi < a[i])
            cnt ++;
    cout << cnt;
    return 0;
}
