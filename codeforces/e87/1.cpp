#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b >= a){
            cout << b << endl;
        }else{
            ll count = b;
            a -= b;
            if(c <= d){
                cout << -1 << endl;
            }else{
                ll diff = c - d;
                ll i = a / diff;
                if(a % diff != 0) i++;
                count += i * c;
                cout << count << endl;
            }
        }
        
    }
}