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
    int t;
    string a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int la = a.length();
        int lb = b.length();
        bool flag = false;
        f(i, 0, la){
            f(j, 0, lb){
                if(a.at(i) == b.at(j)){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag){
            dbg("YES");
        }
        else{
            dbg("NO");
        }
    }
}