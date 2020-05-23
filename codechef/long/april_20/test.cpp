#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

ll modPow(ll base, ll exp, ll n){

    base = base % n;

    if (exp == 0)
        return 1;

    else if (exp == 1)
        return base;

    else if (exp % 2 == 0)
        return modPow(base * base % n, exp / 2, n);

    else
        return base * modPow(base, exp - 1, n) % n;
}

int main(){
    ios::sync_with_stdio(0);
    f(i, 0, 50){
        cout << i << " " << modPow(2, i, 1e15) << endl;
    }
}