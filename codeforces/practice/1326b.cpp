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
    int n;
    cin >> n;
    int bi, xi = 0, ai;
    f(i, 0, n){
        cin >> bi;
        ai = bi + xi;
        if(ai > xi) xi = ai;
        cout << ai << ' ';
    }
    cout << endl;
}