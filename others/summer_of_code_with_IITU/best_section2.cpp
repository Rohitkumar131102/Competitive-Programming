/* *>>>>>Anshit_Bhardwaj<<<<<* */
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
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    f(i, 0, n){
        cin >> arr[i];
    }
    bool flag = true;
    int ans = 0;
    while(flag){
        int count = 0;
        f(i, 1, n){
            if(arr[i-1] < arr[i]){
                arr[i] = arr[i-1];
                i++;
                count++;
            }
        }
        if(count == 0){
            break;
        }
        ans++;
    }
    cout << ans << endl;
}