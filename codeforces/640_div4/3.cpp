#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll k;
        cin >> k;
        ll add = k / (n-1);
        add += k;
        if(add % n == 0){
            add--;
        }
        if(k >= n){
            cout << add << endl;
        }else{
            cout << k << endl;
        }
    }
}