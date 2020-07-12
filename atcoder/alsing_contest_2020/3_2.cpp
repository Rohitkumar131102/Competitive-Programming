/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> arr({0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 0, 0, 1, 6, 0, 3, 0, 0, 0, 0, 0, 3, 3, 6, 0, 0, 3, 0, 0, 0, 0, 3, 3, 6, 0, 6, 0, 0, 0, 3, 0, 0, 1, 6, 0, 6, 6, 0, 0, 6, 0, 0, 0, 0, 3, 3, 3, 6, 0, 6, 3, 6, 0, 0, 0, 6, 0, 0, 0, 3, 3, 9, 0, 6, 3, 6, 0, 3, 6, 0, 0, 0, 0, 6, 1, 6, 0, 6, 6, 0, 3, 12, 0, 6, 0, 0, 3, 6, 0, 0, 0, 3, 3, 12, 0, 6, 3, 6, 0, 3, 6, 9, 0, 6, 0, 0, 0, 3, 6, 3, 3, 6, 0, 6, 3, 12, 0, 3, 6, 6, 0, 6, 0, 6, 3, 6, 0, 0, 1, 6, 3, 12, 6, 0, 0, 12, 0, 6, 0, 6, 6, 12, 0, 0, 6, 0, 0, 6, 0, 12, 3, 6, 0, 6, 3, 9, 6, 3, 6, 6, 0, 6, 0, 6, 0, 15, 6, 0, 0, 6, 0, 3, 3, 12, 0, 12, 6, 6, 0, 3, 6, 6, 3, 12, 0, 6, 0, 9, 6, 0, 0, 6, 3, 12, 1, 6, 6, 6, 6, 0, 0, 18, 0, 12, 0, 3, 6, 12, 0, 0, 6, 3, 6, 12, 0, 12, 0, 0, 0, 9, 3, 9, 6, 12, 3, 12, 0, 3, 6, 6, 0, 12, 0, 12, 0, 9, 9, 0, 0, 6, 3, 6, 3, 12, 6, 9, 3, 6, 0, 12, 3, 6, 3, 9, 6, 12, 6, 6, 0, 6, 0, 9, 6, 6, 0, 12, 3, 6, 0, 9, 6, 6, 1, 6, 0, 21, 12, 6, 0, 12, 0, 12, 0, 0, 6, 15, 6, 0, 6, 12, 0, 12, 0, 12, 0, 0, 0, 12, 0, 12, 12, 3, 3, 18, 3, 6, 3, 6, 6, 9, 9, 18, 0, 6, 0, 12, 0, 9, 6, 0, 3, 12, 3, 6, 6, 12, 6, 6, 0, 0, 0, 15, 3, 18, 3, 18, 3, 12, 6, 3, 6, 9, 0, 12, 0, 12, 0, 18, 12, 0, 0, 12, 3, 6, 0, 6, 6, 9, 6, 0, 0, 18, 1, 18, 3, 12, 6, 6, 6, 12, 0, 15, 6, 12, 6, 18, 0, 0, 6, 0, 9, 12, 0, 18, 0, 6, 3, 12, 0, 12, 12, 0, 0, 12, 0, 3, 6, 12, 6, 18, 9, 18, 0, 9, 6, 18, 0, 6, 0, 6, 3, 27, 6, 6, 6, 6, 3, 6, 0, 12, 6, 9, 0, 6, 0, 18, 0, 9, 9, 15, 3, 12, 6, 6, 3, 9, 6, 12, 12, 18, 0, 18, 0, 6, 6, 21, 6, 0, 0, 6, 3, 15, 6, 12, 6, 18, 0, 0, 0, 12, 6, 6, 3, 6, 4, 18, 6, 12, 6, 3, 9, 30, 0, 18, 0, 6, 6, 12, 6, 6, 9, 12, 0, 18, 6, 18, 0, 6, 0, 12, 0, 6, 12, 6, 3, 18, 0, 6, 6, 6, 6, 15, 3, 24, 0, 6, 3, 18, 0, 12, 6, 12, 6, 24, 0, 15, 18, 9, 6, 0, 0, 18, 3, 6, 0, 15, 12, 12, 6, 6, 0, 18, 0, 6, 3, 12, 0, 12, 6, 6, 9, 9, 6, 24, 3, 24, 0, 9, 12, 6, 6, 12, 0, 12, 0, 21, 9, 15, 6, 12, 3, 18, 3, 12, 6, 12, 6, 0, 0, 12, 0, 12, 6, 24, 0, 6, 12, 6, 1, 9, 6, 12, 6, 24, 0, 18, 3, 12, 6, 6, 12, 24, 0, 12, 6, 15, 6, 18, 0, 18, 0, 0, 0, 18, 9, 21, 12, 0, 6, 18, 0, 9, 6, 6, 6, 12, 0, 12, 0, 9, 9, 27, 6, 6, 3, 18, 6, 21, 6, 6, 12, 12, 0, 12, 0, 24, 12, 0, 0, 24, 3, 24, 6, 12, 12, 18, 0, 0, 0, 12, 0, 18, 3, 15, 6, 12, 9, 6, 0, 15, 6, 9, 12, 24, 0, 12, 3, 6, 6, 21, 6, 18, 3, 18, 0, 21, 12, 15, 6, 6, 0, 12, 3, 12, 9, 18, 9, 12, 6, 6, 6, 24, 0, 18, 3, 24, 0, 6, 6, 0, 6, 9, 6, 6, 4, 30, 0, 18, 12, 9, 6, 24, 0, 18, 0, 9, 12, 21, 6, 6, 12, 12, 0, 18, 0, 21, 15, 12, 0, 12, 6, 12, 12, 18, 0, 18, 0, 6, 0, 9, 12, 18, 6, 30, 0, 0, 0, 24, 6, 9, 3, 12, 6, 30, 3, 6, 12, 6, 12, 12, 0, 36, 0, 6, 3, 27, 12, 12, 6, 6, 6, 24, 0, 12, 6, 12, 0, 18, 0, 18, 15, 18, 3, 18, 6, 12, 6, 6, 12, 3, 6, 6, 0, 12, 3, 39, 3, 12, 12, 12, 3, 18, 0, 21, 12, 21, 6, 18, 0, 12, 0, 9, 9, 12, 9, 24, 9, 12, 6, 12, 6, 33, 0, 6, 0, 18, 0, 9, 15, 12, 6, 24, 6, 6, 3, 15, 6, 15, 12, 18, 0, 18, 1, 18, 6, 12, 6, 6, 0, 24, 6, 24, 12, 18, 6, 24, 0, 6, 6, 12, 15, 24, 0, 24, 6, 6, 0, 18, 0, 15, 18, 12, 0, 24, 0, 12, 6, 12, 12, 18, 6, 24, 0, 0, 6, 24, 3, 12, 0, 12, 6, 30, 9, 6, 12, 24, 12, 12, 0, 15, 18, 12, 0, 18, 0, 24, 6, 15, 6, 18, 3, 18, 3, 12, 6, 24, 12, 12, 12, 6, 0, 36, 0, 18, 3, 6, 12, 6, 9, 12, 0, 3, 12, 36, 0, 30, 0, 12, 0, 18, 6, 12, 9, 12, 6, 24, 3, 18, 12, 15, 9, 24, 0, 18, 6, 18, 9, 18, 12, 6, 6, 24, 3, 24, 0, 12, 12, 12, 0, 6, 0, 27, 12, 18, 3, 30, 3, 18, 6, 0, 12, 15, 6, 18, 0, 24, 0, 9, 6, 9, 12, 18, 7, 24, 0, 24, 12, 15, 12, 24, 0, 24, 0, 6, 9, 30, 9, 6, 6, 0, 9, 33, 12, 36, 0, 12, 0, 18, 0, 6, 21, 12, 6, 36, 6, 0, 3, 18, 6, 12, 6, 24, 0, 12, 3, 24, 6, 9, 12, 6, 6, 30, 6, 18, 12, 9, 9, 12, 0, 30, 3, 18, 3, 27, 6, 30, 12, 12, 0, 24, 0, 27, 12, 6, 0, 24, 3, 18, 18, 9, 6, 18, 0, 12, 3, 33, 18, 12, 9, 6, 0, 12, 6, 30, 0, 24, 12, 12, 0, 30, 6, 6, 6, 0, 6, 24, 0, 12, 0, 18, 15, 33, 6, 30, 15, 18, 0, 9, 12, 24, 9, 12, 0, 18, 6, 27, 18, 15, 6, 18, 3, 24, 0, 6, 6, 36, 12, 18, 0, 12, 3, 30, 3, 12, 6, 12, 15, 6, 0, 18, 12, 15, 9, 30, 0, 18, 6, 12, 12, 18, 6, 6, 3, 24, 1, 27, 12, 18, 6, 18, 0, 24, 0, 18, 15, 15, 21, 30, 6, 12, 12, 18, 0, 30, 6, 24, 0, 6, 0, 18, 6, 36, 12, 6, 6, 36, 0, 6, 12, 12, 12, 24, 0, 30, 0, 9, 6, 18, 0, 18, 12, 12, 6, 24, 6, 9, 15, 12, 0, 12, 6, 30, 9, 18, 0, 42, 3, 18, 6, 12, 18, 33, 12, 12, 0, 18, 0, 21, 12, 12, 12, 24, 6, 30, 0, 27, 18, 6, 12, 6, 0, 24, 0, 18, 15, 30, 0, 18, 12, 6, 0, 21, 6, 21, 12, 24, 0, 30, 0, 6, 6, 6, 12, 24, 0, 30, 12, 9, 12, 21, 3, 24, 0, 12, 3, 21, 18, 9, 18, 18, 6, 30, 3, 42, 6, 21, 6, 30, 0, 6, 3, 24, 9, 36, 6, 6, 9, 12, 6, 18, 12, 33, 9, 12, 0, 24, 9, 9, 6, 3, 18, 36, 6, 18, 0, 24, 6, 6, 6, 18, 0, 12, 0, 30, 3, 39, 12, 12, 7, 18, 0, 15, 18, 18, 9, 36, 0, 24, 6, 6, 18, 30, 0, 18, 9, 18, 3, 24, 6, 21, 12, 24, 0, 30, 3, 33, 24, 12, 6, 18, 6, 6, 6, 18, 6, 18, 12, 18, 0, 24, 6, 36, 3, 18, 6, 0, 12, 30, 0, 9, 24, 18, 0, 24, 0, 18, 0, 0, 12, 30, 15, 30, 6, 18, 3, 30, 0, 24, 18, 12, 0, 36, 3, 24, 12, 15, 18, 18, 6, 24, 3, 24, 12, 18, 12, 24, 0, 0, 6, 39, 6, 24, 3, 18, 3, 42, 6, 12, 12, 15, 9, 30, 0, 12, 0, 18, 6, 18, 12, 24, 15, 12, 0, 12, 12, 30, 12, 12, 0, 18, 0, 15, 15, 18, 18, 30, 3, 24, 12, 9, 6, 48, 0, 18, 0, 30, 0, 21, 6, 12, 12, 24, 12, 18, 3, 48, 24, 6, 6, 18, 0, 36, 0, 12, 15, 27, 6, 12, 12, 18, 6, 27, 6, 12, 9, 18, 0, 24, 6, 18, 18, 21, 0, 36, 0, 12, 0, 18, 12, 21, 18, 24, 0, 12, 1, 18, 9, 21, 18, 6, 9, 42, 3, 36, 12, 12, 12, 30, 0, 12, 6, 21, 12, 36, 6, 24, 9, 12, 6, 12, 12, 24, 12, 18, 0, 42, 0, 15, 6, 15, 15, 42, 6, 30, 6, 12, 12, 18, 12, 18, 0, 6, 6, 36, 0, 30, 18, 6, 0, 6, 0, 30, 18, 18, 0, 42, 0, 18, 6, 15, 18, 24, 0, 12, 6, 36, 9, 33, 12, 12, 12, 18, 0, 36, 0, 21, 21, 15, 18, 18, 15, 18, 0, 18, 6, 42, 6, 24, 0, 18, 3, 42, 6, 18, 12, 12, 12, 18, 0, 15, 12, 18, 12, 36, 0, 30, 12, 3, 21, 18, 0, 30, 6, 24, 0, 27, 12, 18, 12, 6, 0, 12, 0, 36, 15, 15, 3, 36, 12, 18, 6, 30, 6, 33, 12, 12, 0, 12, 6, 24, 6, 54, 18, 12, 3, 36, 9, 9, 12, 12, 18, 36, 0, 6, 0, 21, 15, 27, 9, 24, 12, 30, 6, 24, 6, 27, 18, 12, 0, 30, 0, 21, 12, 18, 6, 30, 0, 18, 0, 21, 18, 21, 6, 30, 0, 24, 3, 6, 6, 15, 27, 12, 10, 42, 6, 36, 12, 12, 6, 24, 0, 24, 6, 12, 12, 48, 6, 18, 12, 0, 3, 51, 6, 30, 6, 24, 0, 24, 0, 30, 21, 15, 12, 24, 9, 18, 6, 18, 12, 30, 9, 24, 0, 18, 0, 27, 18, 9, 6, 18, 9, 54, 0, 18, 24, 21, 18, 12, 0, 24, 0, 12, 0, 30, 9, 30, 12, 6, 9, 24, 6, 15, 15, 18, 0, 30, 3, 33, 18, 21, 12, 42, 3, 30, 6, 6, 24, 27, 6, 12, 0, 24, 3, 42, 6, 42, 9, 12, 6, 18, 6, 24, 12, 12, 12, 54, 0, 6, 12, 18, 6, 18, 18, 30, 12, 30, 0, 18, 0, 27, 18, 24, 0, 18, 0, 15, 24, 21, 6, 24, 3, 36, 6, 6, 6, 45, 21, 18, 0, 18, 6, 33, 3, 18, 0, 24, 15, 30, 0, 30, 24, 12, 6, 36, 0, 24, 3, 21, 24, 18, 15, 30, 3, 12, 6, 42, 12, 12, 12, 6, 0, 54, 6, 30, 15, 24, 18, 24, 6, 12, 0, 9, 6, 30, 0, 48, 0, 24, 0, 15, 12, 39, 12, 24, 6, 24, 6, 15, 30, 12, 6, 24, 0, 24, 3, 24, 12, 24, 6, 6, 18, 12, 4, 54, 6, 21, 18, 18, 0, 36, 6, 24, 9, 30, 12, 24, 9, 36, 6, 12, 18, 42, 3, 30, 0, 6, 9, 21, 6, 12, 30, 30, 6, 30, 0, 27, 12, 9, 18, 30, 0, 36, 0, 18, 9, 42, 6, 24, 12, 0, 6, 51, 12, 24, 12, 12, 0, 18, 6, 12, 18, 6, 6, 36, 3, 54, 9, 18, 6, 27, 12, 18, 0, 30, 0, 39, 9, 18, 18, 12, 9, 30, 6, 21, 12, 27, 18, 24, 0, 12, 0, 42, 18, 42, 6, 24, 15, 18, 0, 24, 12, 45, 12, 6, 0, 54, 0, 15, 21, 6, 6, 30, 6, 18, 12, 24, 18, 30, 6, 36, 0, 12, 3, 24, 12, 18, 18, 18, 12, 24, 0, 33, 12, 27, 6, 42, 0, 18, 6, 9, 15, 30, 6, 30, 6, 12, 6, 18, 6, 33, 15, 30, 0, 36, 3, 27, 21, 33, 24, 30, 9, 24, 0, 12, 18, 33, 6, 6, 0, 18, 3, 57, 12, 24, 18, 30, 9, 18, 0, 18, 12, 27, 12, 36, 0, 36, 6, 12, 6, 27, 12, 30, 9, 24, 6, 39, 18, 12, 24, 12, 0, 30, 0, 30, 6, 15, 15, 18, 3, 24, 18, 9, 12, 30, 9, 30, 0, 18, 6, 42, 18, 30, 0, 6, 10, 48, 0, 24, 12, 12, 18, 48, 0, 30, 3, 30, 15, 18, 6, 24, 18, 18, 0, 42, 6, 36, 15, 24, 0, 42, 12, 21, 24, 12, 12, 24, 0, 12, 6, 18, 18, 60, 6, 30, 0, 12, 0, 24, 0, 12, 18, 30, 15, 42, 0, 33, 30, 6, 6, 12, 0, 42, 3, 27, 6, 33, 12, 36, 12, 18, 0, 30, 6, 18, 12, 12, 0, 18, 6, 15, 27, 27, 6, 42, 6, 36, 9, 18, 30, 33, 9, 30, 0, 6, 6, 54, 6, 36, 24, 24, 0, 30, 3, 12, 6, 21, 24, 30, 0, 24, 0, 24, 12, 42, 9, 42, 21, 12, 12, 27, 12, 27, 6, 12, 0, 48, 6, 12, 18, 12, 12, 36, 6, 30, 0, 24, 0, 42, 12, 12, 0, 36, 0, 24, 15, 21, 21, 18, 6, 12, 9, 36, 18, 18, 15, 42, 0, 18, 6, 9, 18, 48, 12, 30, 9, 24, 3, 33, 6, 18, 18, 18, 0, 36, 3, 54, 24, 3, 12, 36, 9, 36, 6, 30, 12, 36, 12, 24, 0, 18, 6, 24, 6, 42, 0, 24, 18, 18, 0, 9, 30, 39, 12, 42, 0, 36, 0, 12, 12, 21, 12, 18, 12, 24, 6, 45, 6, 18, 24, 18, 0, 36, 0, 42, 15, 18, 6, 24, 6, 12, 12, 18, 12, 30, 6, 18, 0, 30, 1, 30, 9, 57, 9, 12, 9, 48, 6, 21, 24, 18, 12, 66, 0, 18, 6, 9, 24, 24, 24, 30, 12, 18, 0, 48, 6, 24, 18, 18, 0, 24, 3, 27, 18, 24, 12, 36, 6, 48, 6, 15, 18, 42, 6, 24, 0, 12, 12, 36, 6, 6, 24, 12, 3, 48, 0, 48, 18, 0, 12, 18, 0, 36, 6, 18, 9, 54, 15, 12, 12, 6, 6, 39, 6, 24, 18, 42, 0, 30, 0, 33, 18, 24, 18, 18, 9, 18, 0, 15, 18, 54, 0, 36, 0, 24, 0, 48, 24, 15, 18, 18, 12, 42, 9, 24, 12, 36, 21, 30, 0, 36, 12, 24, 3, 30, 0, 48, 15, 12, 6, 15, 18, 18, 18, 24, 0, 30, 0, 24, 24, 18, 9, 72, 0, 30, 6, 21, 18, 30, 6, 24, 0, 0, 6, 24, 18, 42, 12, 6, 15, 36, 0, 30, 18, 30, 12, 24, 0, 6, 0, 18, 12, 54, 9, 36, 9, 36, 9, 30, 6, 27, 27, 24, 0, 54, 6, 21, 18, 21, 6, 36, 15, 36, 3, 30, 12, 6, 18, 30, 0, 18, 6, 54, 0, 30, 21, 36, 9, 30, 6, 30, 24, 24, 6, 30, 0, 36, 12, 9, 24, 24, 12, 18, 9, 30, 0, 48, 12, 24, 12, 12, 0, 48, 0, 18, 12, 24, 24, 30, 6, 18, 12, 21, 12, 24, 0, 66, 0, 12, 0, 30, 9, 24, 24, 18, 13, 42, 3, 18, 18, 27, 24, 24, 0, 30, 6, 15, 18, 39, 12, 12, 9, 36, 12, 54, 12, 42, 18, 6, 0, 36, 0, 51, 18, 12, 0, 66, 12, 24, 0, 6, 24, 51, 12, 24, 0, 24, 0, 33, 6, 18, 18, 30, 6, 42, 3, 18, 30, 15, 15, 30, 0, 30, 6, 30, 12, 48, 12, 24, 12, 12, 9, 36, 6, 36, 6, 12, 0, 30, 0, 24, 21, 24, 15, 42, 12, 24, 6, 9, 18, 15, 9, 42, 0, 24, 12, 66, 12, 30, 24, 6, 9, 54, 0, 36, 12, 21, 12, 36, 0, 24, 3, 24, 15, 36, 6, 30, 24, 12, 6, 33, 6, 39, 21, 30, 0, 42, 6, 12, 30, 30, 18, 36, 0, 48, 3, 36, 12, 30, 18, 18, 0, 24, 0, 30, 6, 33, 21, 24, 6, 18, 12, 24, 12, 12, 15, 48, 0, 24, 6, 21, 21, 60, 6, 24, 12, 18, 0, 30, 12, 15, 12, 24, 0, 24, 3, 60, 27, 18, 12, 30, 3, 24, 9, 21, 12, 60, 18, 24, 0, 24, 9, 33, 
6, 36, 12, 24, 15, 42, 6, 27, 36, 27, 6, 42, 0, 42, 6, 12, 15, 15, 24, 42, 18, 12, 0, 33, 6, 21, 18, 24, 0, 48, 3, 36, 9, 24, 24, 30, 6, 36, 0, 39, 18, 60, 6, 18, 0, 12, 6, 21, 27, 30, 0, 18, 6, 42, 6, 42, 18, 24, 9, 48, 0, 6, 6, 18, 18, 18, 6, 18, 15, 30, 4, 60, 12, 30, 30, 18, 0, 36, 0, 27, 18, 30, 18, 48, 9, 30, 12, 18, 6, 42, 9, 48, 0, 18, 6, 42, 6, 30, 24, 12, 3, 36, 0, 36, 36, 15, 18, 30, 0, 66, 0, 12, 18, 42, 9, 24, 15, 18, 12, 54, 6, 18, 21, 36, 0, 30, 6, 24, 24, 12, 6, 24, 9, 36, 12, 6, 12, 45, 12, 36, 0, 36, 0, 48, 3, 24, 18, 12, 24, 36, 0, 30, 12, 30, 21, 30, 0, 6, 15, 18, 15, 66, 12, 42, 3, 12, 0, 39, 12, 30, 12, 18, 0, 54, 6, 30, 24, 9, 12, 60, 12, 30, 12, 30, 24, 24, 18, 30, 0, 36, 0, 27, 9, 45, 18, 24, 12, 24, 0, 36, 24, 12, 6, 60, 0, 18, 0, 24, 15, 51, 9, 24, 12, 30, 12, 27, 18, 51, 18, 24, 0, 36, 6, 27, 27, 12, 30, 36, 6, 30, 0, 12, 6, 42, 0, 18, 0, 18, 0, 48, 12, 45, 24, 6, 15, 42, 6, 12, 18, 27, 9, 54, 0, 42, 3, 33, 12, 15, 12, 54, 18, 30, 6, 36, 18, 21, 30, 18, 0, 48, 3, 30, 18, 36, 6, 18, 0, 18, 12, 57, 24, 42, 6, 24, 0, 18, 12, 36, 18, 30, 12, 36, 3, 78, 0, 24, 6, 6, 36, 42, 0, 24, 0, 21, 15, 33, 6, 42, 18, 12, 3, 30, 12, 30, 27, 24, 0, 42, 12, 39, 12, 30, 12, 30, 15, 30, 6, 12, 24, 54, 6, 24, 0, 18, 6, 33, 12, 18, 24, 24, 7, 30, 0, 60, 24, 21, 12, 30, 0, 48, 6, 18, 15, 39, 12, 18, 18, 18, 0, 48, 12, 54, 18, 42, 0, 30, 0, 15, 30, 27, 18, 72, 0, 30, 15, 12, 12, 30, 18, 36, 0, 6, 3, 60, 15, 24, 18, 6, 18, 54, 6, 21, 24, 24, 12, 30, 0, 30, 6, 30, 15, 54, 6, 48, 12, 30, 12, 36, 0, 24, 3, 24, 0, 54, 6, 18, 30, 15, 6, 42, 9, 36, 0, 21, 30, 15, 12, 12, 0, 24, 3, 72, 0, 51, 39, 24, 12, 30, 3, 33, 18, 15, 12, 42, 0, 30, 12, 27, 24, 51, 12, 42, 12, 18, 3, 42, 12, 39, 18, 12, 0, 30, 0, 24, 21, 21, 21, 30, 6, 66, 12, 12, 6, 69, 21, 30, 0, 24, 6, 45, 12, 12, 18, 42, 12, 18, 0, 39, 30, 33, 12, 54, 0, 12, 0, 12, 18, 36, 9, 30, 9, 24, 9, 60, 12, 30, 12, 12, 0, 42, 9, 42, 18, 45, 24, 42, 6, 12, 9, 24, 6, 30, 12, 42, 0, 30, 6, 15, 15, 30, 12, 18, 12, 54, 6, 21, 30, 12, 33, 60, 0, 48, 0, 30, 15, 42, 6, 24, 24, 30, 0, 36, 18, 33, 18, 12, 0, 60, 0, 72, 15, 12, 9, 30, 12, 24, 15, 21, 24, 51, 12, 24, 0, 24, 6, 12, 6, 33, 24, 36, 9, 54, 6, 27, 24, 30, 6, 48, 0, 24, 3, 36, 27, 42, 15, 18, 18, 12, 6, 54, 6, 30, 15, 36, 0, 12, 12, 18, 24, 21, 18, 30, 3, 60, 0, 33, 12, 36, 18, 48, 0, 24, 1, 39, 12, 24, 18, 24, 9, 66, 6, 48, 24, 12, 12, 42, 0, 24, 6, 18, 12, 63, 6, 36, 24, 18, 0, 39, 12, 39, 24, 24, 0, 54, 6, 15, 24, 15, 24, 48, 3, 36, 12, 12, 24, 39, 18, 36, 0, 42, 6, 42, 6, 60, 24, 12, 18, 18, 0, 45, 6, 6, 6, 72, 0, 30, 6, 24, 9, 36, 12, 24, 9, 30, 15, 36, 18, 33, 24, 6, 0, 54, 0, 33, 36, 18, 24, 36, 6, 18, 6, 24, 18, 75, 6, 18, 0, 18, 0, 48, 9, 36, 18, 42, 9, 30, 0, 27, 36, 24, 15, 42, 0, 42, 18, 36, 12, 18, 12, 72, 9, 24, 0, 54, 18, 21, 24, 12, 0, 60, 0, 24, 24, 39, 12, 42, 18, 30, 6, 9, 12, 48, 12, 30, 0, 18, 12, 36, 15, 48, 18, 18, 3, 42, 6, 42, 18, 18, 24, 54, 0, 36, 0, 24, 36, 42, 0, 12, 27, 30, 6, 60, 6, 30, 24, 12, 0, 36, 3, 42, 12, 18, 12, 36, 9, 30, 0, 15, 18, 33, 12, 54, 0, 30, 6, 33, 21, 27, 30, 42, 12, 54, 9, 42, 24, 27, 6, 36, 0, 24, 12, 24, 12, 45, 24, 12, 6, 30, 12, 69, 12, 42, 12, 30, 0, 24, 0, 42, 18, 24, 15, 60, 9, 48, 18, 18, 24, 27, 12, 36, 0, 30, 0, 54, 9, 30, 18, 24, 15, 48, 0, 24, 24, 45, 24, 24, 0, 18, 6, 36, 9, 54, 15, 24, 12, 12, 6, 18, 12, 54, 18, 12, 0, 60, 3, 48, 30, 12, 18, 60, 6, 24, 3, 36, 12, 33, 12, 36, 0, 36, 6, 36, 3, 33, 24, 12, 13, 42, 12, 27, 18, 30, 12, 54, 0, 30, 12, 21, 39, 54, 6, 54, 18, 18, 0, 33, 12, 36, 36, 36, 0, 30, 0, 42, 33, 18, 18, 36, 12, 30, 3, 30, 12, 66, 6, 30, 0, 18, 12, 63, 18, 24, 6, 30, 12, 48, 9, 6, 24, 30, 12, 42, 0, 72, 0, 30, 12, 48, 3, 24, 15, 12, 12, 66, 18, 9, 36, 12, 0, 54, 0, 54, 18, 15, 30, 36, 6, 12, 0, 21, 18, 54, 12, 30, 0, 6, 0, 36, 15, 60, 18, 18, 15, 48, 6, 27, 24, 21, 12, 54, 0, 54, 9, 12, 24, 48, 12, 48, 15, 54, 6, 36, 6, 39, 24, 24, 0, 24, 3, 33, 24, 18, 18, 66, 12, 18, 12, 30, 12, 75, 15, 36, 0, 30, 9, 24, 6, 21, 24, 24, 12, 60, 0, 66, 36, 12, 18, 36, 0, 24, 6, 30, 18, 39, 18, 30, 12, 24, 9, 30, 6, 36, 18, 18, 0, 54, 12, 33, 24, 36, 6, 66, 0, 30, 6, 12, 12, 33, 24, 54, 0, 18, 3, 60, 3, 30, 24, 24, 21, 48, 0, 18, 30, 51, 12, 18, 0, 30, 12, 33, 15, 18, 12, 30, 27, 24, 0, 48, 12, 45, 6, 30, 0, 72, 0, 51, 18, 27, 27, 54, 9, 48, 12, 27, 30, 36, 18, 18, 0, 42, 3, 36, 9, 45, 30, 6, 6, 36, 3, 51, 24, 24, 18, 72, 0, 18, 6, 9, 36, 42, 0, 36, 9, 30, 12, 60, 30, 24, 15, 24, 0, 36, 6, 30, 27, 27, 18, 42, 12, 48, 0, 42, 0, 33, 24, 24, 0, 30, 0, 42, 12, 48, 9, 36, 9, 24, 6, 27, 36, 12, 9, 60, 0, 30, 12, 15, 18, 42, 18, 36, 18, 24, 7, 48, 12, 54, 24, 30, 0, 78, 0, 18, 18, 27, 24, 24, 6, 30, 12, 33, 18, 60, 15, 54, 0, 12, 12, 36, 12, 36, 24, 30, 18, 54, 0, 18, 18, 18, 24, 84, 0, 54, 0, 27, 15, 42, 6, 36, 12, 18, 9, 54, 6, 30, 30, 24, 0, 30, 9, 60, 30, 36, 6, 42, 12, 30, 6, 6, 30, 60, 0, 18, 0, 24, 9, 51, 18, 24, 33, 30, 0, 42, 12, 60, 18, 18, 36, 18, 0, 24, 0, 18, 9, 78, 12, 48, 24, 12, 0, 48, 6, 12, 18, 42, 0, 48, 0, 30, 27, 18, 6, 48, 3, 66, 21, 18, 18, 33, 12, 48, 0, 30, 6, 63, 21, 18, 36, 24, 15, 60, 6, 36, 30, 36, 0, 48, 0, 48, 3, 36, 30, 42, 18, 24, 24, 12, 6, 21, 6, 72, 12, 36, 0, 60, 6, 12, 18, 15, 24, 60, 9, 30, 0, 39, 30, 54, 12, 18, 0, 18, 3, 60, 9, 57, 24, 6, 18, 48, 6, 60, 18, 18, 9, 48, 0, 24, 12, 18, 18, 39, 6, 42, 15, 36, 6, 36, 18, 18, 30, 18, 0, 42, 6, 39, 27, 27, 18, 48, 12, 42, 12, 24, 18, 27, 9, 30, 0, 24, 9, 81, 12, 72, 12, 30, 6, 36, 0, 33, 42, 39, 30, 42, 0, 12, 3, 12, 6, 24, 18, 48, 12, 48, 3, 63, 24, 24, 27, 30, 0, 78, 6, 36, 18, 36, 30, 30, 12, 36, 12, 30, 6, 60, 12, 48, 0, 24, 0, 36, 21, 30, 24, 30, 12, 48, 0, 36, 12, 24, 27, 36, 0, 42, 12, 27, 24, 54, 6, 18, 12, 48, 0, 30, 6, 72, 24, 12, 0, 30, 3, 45, 24, 0, 18, 78, 15, 18, 18, 39, 18, 39, 9, 36, 0, 24, 6, 39, 12, 30, 18, 30, 16, 48, 0, 36, 30, 12, 12, 60, 0, 42, 3, 24, 21, 84, 33, 30, 12, 18, 18, 48, 12, 36, 12, 30, 0, 48, 9, 42, 36, 42, 6, 48, 3, 42, 0, 33, 24, 30, 12, 36, 0, 36, 6, 54, 12, 30, 30, 6, 21, 66, 0, 39, 24, 36, 24, 36, 0, 24, 12, 30, 15, 54, 12, 78, 30, 6, 0, 33, 12, 27, 30, 30, 0, 36, 6, 18, 36, 36, 6, 66, 3, 60, 6, 18, 30, 42, 0, 12, 0, 36, 6, 54, 6, 33, 24, 24, 12, 54, 0, 42, 12, 15, 12, 60, 0, 30, 0, 21, 18, 75, 18, 48, 18, 18, 15, 30, 24, 42, 33, 36, 0, 30, 6, 45, 24, 9, 30, 36, 3, 54, 15, 24, 18, 63, 18, 42, 0, 24, 0, 75, 6, 30, 9, 30, 15, 42, 12, 33, 36, 21, 24, 60, 0, 54, 9, 30, 30, 48, 12, 18, 12, 24, 0, 66, 12, 24, 18, 36, 0, 72, 6, 36, 15, 27, 27, 30, 6, 12, 18, 24, 6, 78, 15, 42, 0, 12, 6, 27, 24, 51, 18, 36, 12, 60, 3, 51, 30, 12, 24, 36, 0, 30, 0, 48, 12, 21, 6, 36, 24, 54, 6, 42, 6, 36, 36, 6, 0, 54, 12, 27, 15, 18, 18, 66, 6, 42, 0, 15, 30, 63, 12, 48, 0, 36, 3, 63, 12, 36, 30, 18, 9, 48, 3, 48, 36, 30, 12, 42, 0, 72, 6, 36, 30, 30, 12, 24, 12, 6, 15, 75, 18, 30, 6, 36, 0, 24, 0, 18, 36, 48, 18, 60, 18, 60, 12, 33, 12, 33, 15, 72, 0, 18, 9, 54, 15, 21, 30, 36, 12, 30, 0, 42, 24, 48, 18, 36, 0, 24, 6, 18, 15, 81, 12, 12, 27, 36, 12, 30, 6, 36, 18, 24, 0, 48, 6, 36, 36, 27, 6, 48, 9, 36, 3, 36, 36, 36, 24, 30, 0, 24, 1, 42, 6, 66, 27, 24, 18, 48, 12, 51, 18, 24, 18, 84, 0, 24, 6, 12, 9, 63, 18, 48, 9, 30, 0, 36, 12, 33, 24, 30, 0, 72, 0, 42, 48, 36, 18, 42, 12, 42, 15, 24, 12, 60, 15, 24, 0, 12, 21, 72, 3, 42, 30, 24, 18, 36, 6, 42, 18, 30, 12, 42, 0, 48, 12, 12, 24, 24, 18, 66, 6, 24, 0, 93, 12, 51, 30, 12, 0, 54, 6, 18, 27, 24, 24, 36, 12, 30, 0, 45, 18, 60, 6, 54, 0, 24, 0, 51, 24, 21, 18, 30, 6, 72, 6, 6, 18, 21, 36, 42, 0, 48, 12, 27, 24, 36, 6, 30, 27, 30, 6, 39, 18, 51, 36, 30, 0, 42, 0, 66, 18, 36, 6, 66, 9, 24, 12, 24, 24, 78, 12, 36, 0, 36, 12, 60, 15, 42, 24, 6, 15, 54, 0, 33, 30, 21, 30, 42, 0, 54, 0, 24, 9, 60, 9, 36, 24, 24, 6, 66, 12, 48, 18, 54, 0, 30, 0, 30, 39, 30, 18, 48, 6, 42, 12, 33, 24, 33, 12, 60, 0, 18, 6, 42, 24, 42, 24, 6, 12, 72, 6, 42, 30, 18, 9, 30, 0, 24, 15, 30, 18, 60, 12, 54, 15, 24, 0, 48, 24, 33, 12, 36, 0, 66, 6, 36, 18, 21, 30, 72, 3, 24, 9, 27, 30, 30, 18, 42, 0, 42, 0, 72, 6, 39, 42, 24, 18, 60, 3, 24, 18, 36, 18, 30, 0, 54, 6, 27, 33, 60, 12, 24, 24, 18, 18, 30, 12, 21, 33, 48, 0, 78, 12, 78, 12, 30, 12, 42, 12, 48, 0, 24, 12, 75, 18, 24, 0, 18, 0, 33, 24, 30, 21, 42, 15, 30, 12, 39, 30, 51, 12, 54, 0, 36, 12, 18, 12, 48, 24, 78, 18, 18, 6, 78, 6, 24, 30, 12, 0, 42, 0, 45, 18, 15, 27, 42, 0, 54, 18, 36, 18, 36, 6, 48, 0, 30, 12, 36, 21, 45, 6, 24, 7, 54, 0, 27, 42, 33, 24, 72, 0, 42, 0, 48, 24, 45, 18, 18, 15, 36, 15, 66, 6, 66, 30, 18, 0, 48, 0, 27, 39, 30, 18, 66, 27, 12, 12, 18, 24, 60, 6, 66, 0, 42, 0, 42, 6, 33, 21, 36, 12, 42, 6, 21, 36, 33, 21, 48, 0, 66, 12, 6, 18, 75, 24, 36, 12, 18, 0, 81, 12, 42, 30, 36, 0, 24, 0, 30, 30, 30, 6, 60, 9, 60, 6, 24, 30, 30, 6, 30, 0, 30, 12, 75, 18, 30, 24, 24, 15, 78, 0, 42, 24, 18, 30, 42, 0, 30, 12, 21, 12, 48, 9, 60, 21, 30, 12, 24, 24, 39, 21, 24, 0, 54, 3, 39, 30, 33, 24, 72, 12, 60, 0, 18, 24, 57, 12, 24, 0, 24, 3, 90, 9, 12, 21, 36, 12, 30, 18, 84, 24, 30, 9, 60, 0, 36, 18, 18, 24, 78, 18, 24, 18, 48, 6, 24, 0, 45, 30, 24, 0, 66, 3, 60, 36, 21, 42, 42, 6, 30, 6, 33, 12, 60, 21, 36, 0, 6, 6, 36, 15, 36, 30, 48, 21, 48, 0, 39, 36, 36, 6, 54, 0, 66, 3, 18, 18, 33, 24, 36, 18, 30, 9, 66, 6, 15, 36, 24, 0, 96, 6, 30, 12, 42, 6, 36, 6, 36, 9, 27, 36, 42, 12, 42, 0, 18, 6, 51, 12, 78, 18, 30, 9, 54, 12, 39, 24, 24, 33, 66, 0, 36, 9, 45, 33, 36, 12, 18, 27, 36, 0, 78, 12, 48, 24, 30, 0, 42, 9, 48, 21, 18, 9, 60, 12, 54, 6, 21, 24, 72, 3, 66, 0, 18, 18, 33, 12, 21, 36, 36, 6, 36, 6, 60, 36, 36, 18, 48, 0, 24, 0, 30, 24, 87, 24, 24, 27, 42, 6, 60, 18, 66, 6, 18, 0, 36, 6, 39, 36, 30, 18, 36, 9, 30, 0, 18, 18, 51, 12, 48, 0, 54, 0, 48, 18, 36, 30, 36, 30, 66, 3, 12, 18, 15, 39, 60, 0, 24, 12, 66, 6, 54, 12, 48, 6, 18, 7, 30, 24, 48, 18, 30, 0, 84, 0, 30, 48, 12, 15, 60, 9, 42, 18, 42, 18, 42, 18, 48, 0, 30, 9, 48, 21, 69, 36, 12, 12, 48, 0, 57, 18, 24, 24, 66, 0, 36, 6, 24, 21, 69, 6, 54, 12, 30, 18, 72, 18, 30, 30, 18, 0, 42, 0, 42, 42, 12, 18, 42, 6, 54, 9, 42, 12, 72, 18, 24, 0, 24, 3, 78, 0, 24, 24, 30, 15, 60, 6, 42, 30, 39, 21, 36, 0, 54, 12, 27,
 24, 42, 24, 72, 21, 30, 0, 48, 18, 24, 30, 12, 0, 30, 3, 24, 15, 72, 33, 42, 6, 24, 24, 12, 24, 66, 12, 60, 0, 24, 6, 63, 12, 42, 18, 24, 18, 84, 6, 30, 24, 24, 6, 90, 0, 72, 6, 21, 24, 30, 18, 18, 30, 24, 6, 66, 18, 54, 18, 36, 0, 36, 12, 60, 27, 30, 18, 90, 18, 18, 0, 18, 24, 48, 24, 30, 0, 36, 6, 36, 18, 66, 36, 30, 3, 66, 3, 57, 48, 12, 18, 36, 0, 48, 6, 36, 21, 48, 0, 60, 12, 36, 12, 72, 0, 36, 30, 30, 0, 48, 0, 33, 30, 48, 9, 54, 9, 36, 24, 18, 30, 42, 18, 54, 0, 12, 0, 54, 12, 21, 24, 30, 21, 72, 0, 66, 24, 27, 18, 36, 0, 24, 0, 45, 24, 78, 0, 42, 21, 24, 12, 39, 30, 54, 30, 24, 0, 84, 15, 24, 24, 9, 30, 54, 9, 48, 6, 33, 18, 57, 18, 30, 0, 60, 3, 54, 27, 33, 30, 36, 24, 42, 0, 54, 18, 39, 24, 54, 0, 60, 18, 24, 15, 75, 12, 24, 12, 42, 0, 39, 12, 36, 36, 36, 0, 30, 3, 66, 42, 15, 24, 72, 12, 48, 12, 42, 12, 48, 15, 24, 0, 18, 18, 60, 6, 60, 18, 36, 9, 24, 6, 27, 36, 30, 24, 90, 0, 60, 3, 21, 18, 54, 24, 48, 18, 18, 12, 51, 24, 39, 18, 18, 0, 72, 12, 42, 21, 36, 24, 36, 6, 36, 0, 33, 18, 42, 0, 60, 0, 18, 6, 42, 21, 39, 39, 36, 13, 84, 6, 24, 18, 30, 24, 78, 0, 36, 3, 54, 39, 51, 18, 30, 21, 24, 3, 60, 12, 87, 42, 30, 0, 36, 6, 30, 15, 36, 12, 54, 18, 42, 12, 27, 24, 84, 15, 42, 0, 18, 9, 54, 18, 30, 30, 48, 12, 72, 0, 54, 42, 9, 12, 36, 0, 60, 0, 27, 21, 78, 18, 42, 30, 30, 6, 54, 6, 30, 18, 24, 0, 60, 12, 42, 36, 48, 24, 54, 6, 36, 15, 12, 48, 21, 12, 30, 0, 36, 0, 102, 6, 18, 12, 24, 9, 60, 12, 48, 24, 33, 30, 66, 0, 30, 12, 30, 15, 60, 12, 54, 36, 30, 0, 36, 6, 72, 18, 36, 0, 54, 0, 30, 36, 9, 15, 60, 0, 60, 15, 39, 12, 63, 18, 42, 0, 30, 18, 60, 21, 57, 30, 0, 18, 54, 3, 75, 30, 48, 24, 42, 0, 24, 12, 36, 42, 57, 9, 48, 9, 36, 6, 45, 12, 24, 48, 54, 0, 66, 0, 45, 33, 30, 18, 54, 18, 36, 0, 36, 6, 54, 30, 54, 0, 36, 0, 66, 12, 42, 21, 24, 18, 48, 6, 21, 48, 42, 12, 60, 0, 84, 12, 0, 12, 54, 24, 36, 18, 18, 12, 81, 18, 33, 18, 12, 0, 66, 3, 66, 6, 33, 48, 48, 6, 24, 24, 36, 18, 60, 6, 36, 0, 24, 6, 39, 21, 42, 18, 42, 12, 60, 0, 24, 30, 33, 36, 72, 0, 30, 0, 36, 36, 42, 12, 36, 15, 24, 15, 75, 30, 63, 27, 24, 0, 42, 6, 63, 30, 18, 12, 108, 9, 48, 12, 24, 12, 72, 18, 30, 0, 54, 6, 30, 9, 63, 27, 48, 15, 36, 6, 48, 36, 18, 12, 54, 0, 42, 9, 36, 36, 63, 18, 36, 24, 36, 0, 75, 6, 63, 24, 36, 0, 48, 6, 27, 39, 30, 18, 30, 9, 54, 18, 36, 18, 39, 21, 66, 0, 30, 0, 54, 18, 42, 36, 12, 24, 108, 0, 30, 24, 42, 12, 48, 0, 24, 0, 15, 9, 48, 18, 66, 24, 24, 12, 54, 12, 36, 21, 54, 0, 54, 18, 45, 42, 36, 24, 42, 3, 36, 0, 42, 48, 42, 12, 36, 0, 36, 1, 60, 18, 36, 18, 36, 15, 54, 9, 60, 30, 24, 21, 48, 0, 24, 18, 24, 18, 90, 6, 72, 15, 36, 9, 48, 6, 36, 42, 48, 0, 78, 3, 54, 27, 18, 36, 48, 15, 54, 12, 30, 24, 84, 12, 18, 0, 18, 12, 105, 12, 24, 30, 30, 18, 36, 0, 60, 30, 27, 12, 48, 0, 90, 6, 18, 18, 33, 21, 42, 24, 24, 12, 45, 24, 60, 36, 36, 0, 66, 6, 27, 15, 42, 24, 60, 12, 18, 9, 30, 18, 84, 12, 72, 0, 12, 6, 42, 21, 45, 12, 18, 9, 96, 12, 21, 30, 30, 24, 66, 0, 48, 12, 42, 18, 36, 18, 24, 24, 24, 0, 30, 12, 27, 42, 18, 0, 72, 0, 84, 27, 54, 15, 102, 12, 36, 6, 39, 36, 36, 15, 36, 0, 30, 15, 57, 12, 57, 42, 30, 9, 60, 6, 27, 42, 27, 30, 36, 0, 54, 6, 24, 21, 78, 12, 42, 18, 18, 12, 84, 18, 54, 18, 48, 0, 66, 12, 15, 36, 30, 18, 72, 9, 66, 0, 27, 18, 24, 6, 78, 0, 42, 6, 81, 27, 27, 36, 24, 24, 48, 0, 72, 18, 39, 30, 42, 0, 18, 18, 30, 24, 78, 6, 18, 18, 36, 0, 48, 30, 84, 6, 18, 0, 54, 0, 42, 36, 12, 30, 90, 12, 48, 18, 24, 18, 21, 18, 48, 0, 60, 0, 60, 6, 30, 42, 24, 18, 66, 0, 27, 36, 24, 18, 54, 0, 48, 6, 30, 18, 90, 15, 42, 9, 48, 18, 42, 6, 45, 24, 36, 0, 48, 0, 78, 39, 27, 12, 42, 27, 48, 6, 45, 18, 72, 36, 48, 0, 18, 9, 66, 9, 54, 33, 18, 18, 66, 12, 39, 36, 45, 12, 72, 0, 48, 12, 21, 39, 33, 18, 60, 18, 36, 0, 78, 18, 39, 36, 24, 0, 30, 0, 30, 30, 54, 21, 66, 6, 30, 21, 39, 18, 60, 15, 72, 0, 30, 18, 45, 12, 39, 18, 60, 6, 66, 15, 36, 30, 12, 18, 60, 0, 60, 0, 18, 33, 57, 18, 24, 24, 42, 6, 66, 12, 81, 42, 18, 0, 36, 6, 42, 18, 24, 24, 72, 0, 18, 0, 30, 30, 87, 18, 36, 0, 42, 3, 45, 12, 36, 42, 24, 25, 30, 6, 72, 24, 18, 18, 60, 0, 102, 12, 42, 12, 90, 12, 24, 27, 24, 12, 69, 24, 30, 18, 42, 0, 48, 0, 42, 45, 39, 15, 60, 18, 30, 12, 33, 24, 72, 18, 36, 0, 24, 12, 51, 24, 39, 36, 24, 6, 120, 0, 72, 24, 30, 30, 30, 0, 24, 12, 72, 18, 54, 3, 84, 30, 30, 21, 42, 24, 30, 18, 30, 0, 54, 0, 36, 30, 24, 30, 72, 9, 72, 6, 30, 24, 36, 24, 30, 0, 30, 0, 90, 12, 48, 27, 24, 6, 54, 12, 39, 36, 18, 18, 78, 0, 36, 12, 18, 39, 66, 6, 54, 18, 36, 0, 54, 18, 42, 12, 30, 0, 78, 0, 48, 45, 27, 36, 36, 9, 54, 15, 6, 12, 99, 15, 48, 0, 24, 3, 60, 12, 45, 36, 36, 30, 24, 12, 57, 30, 42, 18, 54, 0, 36, 6, 45, 24, 63, 30, 60, 12, 42, 6, 102, 18, 30, 33, 18, 0, 84, 12, 54, 24, 39, 12, 42, 0, 36, 0, 54, 24, 60, 12, 42, 0, 48, 6, 30, 9, 93, 24, 18, 21, 60, 6, 21, 36, 18, 54, 102, 0, 30, 18, 36, 21, 48, 12, 30, 27, 42, 3, 54, 12, 66, 36, 36, 0, 48, 9, 45, 33, 30, 9, 84, 18, 30, 12, 33, 36, 51, 12, 54, 0, 36, 18, 42, 12, 30, 36, 24, 9, 72, 0, 48, 30, 36, 6, 78, 0, 42, 0, 18, 24, 63, 21, 36, 18, 24, 15, 66, 0, 42, 27, 54, 0, 30, 9, 51, 45, 45, 24, 48, 12, 72, 12, 33, 24, 39, 30, 66, 0, 18, 6, 69, 12, 36, 24, 36, 18, 90, 6, 60, 24, 36, 27, 36, 0, 60, 18, 33, 21, 84, 12, 36, 30, 18, 0, 33, 24, 51, 30, 24, 0, 84, 0, 57, 33, 36, 21, 84, 12, 30, 12, 33, 36, 63, 18, 24, 0, 30, 6, 90, 21, 66, 30, 30, 24, 36, 0, 54, 12, 51, 18, 78, 0, 36, 0, 18, 18, 54, 21, 48, 12, 66, 18, 21, 18, 33, 21, 42, 0, 66, 6, 48, 54, 21, 30, 66, 12, 66, 0, 24, 24, 63, 24, 36, 0, 42, 3, 60, 18, 30, 6, 36, 9, 54, 6, 72, 48, 36, 15, 54, 0, 30, 27, 12, 18, 60, 12, 66, 15, 48, 10, 84, 12, 39, 42, 12, 0, 66, 6, 24, 18, 21, 36, 54, 24, 24, 12, 51, 18, 66, 12, 90, 0, 18, 6, 87, 15, 75, 24, 30, 15, 60, 0, 24, 42, 24, 24, 48, 0, 84, 6, 51, 39, 60, 12, 18, 30, 36, 12, 60, 12, 60, 48, 36, 0, 54, 6, 42, 12, 6, 18, 78, 6, 48, 12, 12, 36, 84, 0, 48, 0, 54, 3, 48, 18, 45, 51, 54, 6, 72, 6, 51, 30, 45, 30, 48, 0, 36, 6, 36, 15, 78, 24, 42, 24, 24, 0, 90, 18, 36, 24, 24, 0, 36, 0, 36, 30, 30, 30, 66, 6, 78, 21, 30, 12, 21, 15, 60, 0, 36, 12, 66, 21, 36, 24, 30, 18, 60, 9, 54, 48, 24, 18, 48, 0, 30, 6, 42, 18, 81, 18, 54, 27, 24, 12, 30, 18, 84, 30, 24, 0, 102, 9, 42, 42, 36, 24, 90, 3, 30, 0, 60, 30, 42, 18, 24, 0, 18, 0, 78, 12, 42, 27, 42, 18, 66, 18, 45, 18, 42, 9, 84, 0, 54, 6, 15, 54, 63, 18, 54, 24, 24, 9, 57, 24, 45, 54, 36, 0, 60, 0, 66, 27, 33, 18, 30, 9, 60, 24, 30, 12, 54, 21, 24, 0, 12, 18, 108, 15, 66, 12, 30, 27, 66, 0, 36, 30, 36, 24, 66, 0, 60, 0, 9, 24, 54, 12, 90, 15, 42, 0, 51, 30, 18, 30, 48, 0, 84, 9, 48, 21, 54, 30, 24, 18, 36, 12, 45, 18, 96, 6, 30, 0, 30, 9, 30, 24, 42, 24, 24, 15, 66, 6, 69, 36, 15, 15, 84, 0, 36, 15, 48, 27, 45, 18, 42, 30, 36, 0, 66, 6, 72, 30, 48, 0, 42, 3, 51, 39, 30, 33, 78, 12, 24, 18, 30, 18, 105, 21, 72, 0, 42, 12, 39, 18, 27, 42, 24, 6, 66, 3, 60, 42, 30, 30, 60, 0, 54, 6, 54, 24, 57, 6, 54, 6, 24, 24, 54, 12, 57, 27, 42, 0, 48, 6, 36, 27, 57, 12, 84, 12, 60, 0, 12, 30, 54, 24, 48, 0, 18, 3, 105, 36, 48, 42, 24, 18, 48, 6, 30, 36, 45, 42, 42, 0, 54, 9, 36, 12, 48, 12, 54, 30, 30, 6, 48, 6, 51, 18, 36, 0, 102, 6, 18, 30, 33, 24, 48, 18, 60, 12, 60, 30, 45, 12, 36, 0, 54, 12, 60, 6, 48, 54, 12, 13, 60, 0, 72, 18, 24, 6, 90, 0, 48, 12, 15, 42, 96, 18, 36, 18, 36, 6, 78, 24, 48, 18, 30, 0, 48, 18, 78, 42, 24, 30, 60, 6, 60, 12, 18, 12, 42, 30, 42, 0, 24, 0, 81, 9, 54, 18, 60, 33, 48, 0, 27, 54, 51, 27, 90, 0, 60, 18, 24, 18, 54, 24, 36, 12, 42, 0, 87, 24, 33, 18, 24, 0, 96, 0, 87, 36, 30, 15, 42, 12, 36, 24, 24, 36, 42, 21, 48, 0, 30, 6, 42, 18, 48, 24, 24, 18, 84, 3, 36, 42, 42, 36, 72, 0, 54, 6, 30, 15, 60, 6, 78, 30, 24, 6, 72, 6, 66, 45, 24, 0, 42, 21, 36, 30, 36, 18, 48, 12, 30, 0, 39, 24, 102, 18, 36, 0, 12, 6, 54, 6, 30, 33, 66, 21, 90, 3, 78, 36, 9, 18, 36, 0, 84, 0, 30, 30, 93, 24, 30, 24, 30, 15, 63, 12, 48, 30, 54, 0, 48, 0, 54, 42, 42, 30, 78, 0, 36, 24, 39, 24, 60, 12, 78, 0, 60, 6, 51, 30, 36, 36, 30, 18, 60, 0, 30, 30, 51, 24, 60, 0, 42, 3, 24, 9, 54, 21, 24, 33, 30, 24, 66, 24, 69, 18, 30, 0, 102, 15, 54, 24, 15, 30, 120, 6, 30, 3, 51, 24, 54, 12, 30, 0, 36, 6, 36, 12, 90, 42, 12, 12, 60, 12, 60, 24, 42, 12, 90, 0, 24, 12, 42, 30, 30, 6, 78, 21, 42, 0, 54, 24, 27, 54, 24, 0, 66, 6, 45, 30, 12, 30, 42, 12, 84, 15, 36, 18, 84, 24, 36, 0, 30, 18, 72, 18, 60, 24, 48, 12, 54, 6, 36, 54, 42, 12, 42, 0, 60, 0, 51, 48, 54, 9, 36, 27, 24, 6, 84, 18, 48, 30, 42, 0, 78, 0, 48, 27, 27, 48, 42, 18, 36, 0, 39, 18, 99, 24, 102, 0, 18, 0, 48, 18, 72, 15, 36, 12, 84, 12, 24, 12, 30, 39, 84, 0, 36, 12, 39, 39, 63, 24, 42, 24, 66, 6, 72, 18, 18, 24, 30, 0, 60, 6, 48, 42, 36, 15, 78, 6, 48, 30, 12, 36, 54, 12, 36, 0, 42, 6, 45, 6, 69, 24, 72, 21, 48, 0, 57, 48, 12, 24, 48, 0, 48, 3, 48, 15, 78, 24, 60, 18, 12, 12, 111, 24, 54, 24, 24, 0, 48, 6, 36, 33, 42, 6, 54, 9, 72, 18, 27, 30, 30, 12, 54, 0, 66, 4, 78, 21, 24, 54, 18, 24, 54, 6, 60, 24, 54, 21, 78, 0, 36, 18, 54, 30, 66, 18, 48, 30, 24, 0, 42, 12, 99, 36, 30, 0, 90, 6, 18, 30, 30, 24, 78, 6, 66, 9, 24, 42, 78, 30, 42, 0, 18, 12, 102, 6, 33, 24, 18, 12, 66, 9, 54, 24, 24, 36, 84, 0, 60, 6, 39, 15, 78, 12, 42, 21, 42, 18, 42, 18, 18, 42, 24, 0, 48, 3, 105, 51, 42, 30, 42, 18, 72, 0, 24, 24, 102, 6, 36, 0, 36, 9, 99, 12, 48, 21, 48, 18, 42, 6, 36, 42, 18, 12, 78, 0, 48, 30, 30, 18, 36, 30, 42, 9, 42, 6, 60, 12, 39, 30, 24, 0, 78, 0, 48, 30, 39, 27, 102, 24, 30, 12, 51, 12, 66, 9, 48, 0, 30, 18, 45, 39, 87, 30, 36, 9, 72, 0, 60, 24, 30, 36, 54, 0, 48, 0, 45, 36, 45, 18, 42, 27, 60, 9, 66, 12, 78, 42, 18, 0, 60, 6, 60, 33, 36, 24, 96, 12, 18, 12, 12, 36, 72, 0, 78, 0, 36, 6, 60, 24, 27, 51, 42, 24, 84, 12, 57, 48, 30, 24, 42, 0, 60, 12, 24, 18, 96, 12, 30, 30, 30, 0, 93, 18, 48, 18, 60, 0, 48, 6, 54, 36, 30, 12, 42, 9, 60, 18, 12, 24, 69, 6, 60, 0, 54, 6, 33, 15, 60, 36, 30, 18, 90, 3, 72, 24, 54, 54, 42, 0, 18, 9, 60, 30, 84, 18, 48, 24, 12, 6, 66, 36, 24, 27, 24, 0, 42, 12, 39, 42, 27, 18, 108, 9, 78, 0, 48, 12, 54, 30, 30, 0, 36, 0, 48, 12, 75, 39, 30, 6, 42, 9, 66, 30, 33, 18, 96, 0, 48, 18, 39, 36, 102, 12, 54, 18, 24, 9, 45, 24, 72, 30, 36, 0, 78, 6, 63, 36, 36, 21, 60,
  9,
  36, 12, 54, 24, 78, 27, 42, 0, 42, 18, 60, 9, 24, 24, 54, 39, 84, 0, 27, 36, 39, 12, 84, 0, 66, 0, 21, 30, 30, 42, 66, 18, 18, 18, 78, 12, 48, 42, 36, 0, 90, 6, 48, 33, 39, 24, 48, 15, 54, 15, 54, 24, 48, 18, 60, 0, 24, 0, 48, 24, 78, 24, 36, 9, 90, 12, 42, 24, 30, 45, 54, 0, 66, 12, 24, 12, 60, 6, 48, 33, 48, 0, 60, 6, 51, 54, 12, 0, 30, 0, 69, 21, 42, 15, 72, 15, 48, 21, 33, 36, 96, 6, 30, 0, 54, 6, 87, 30, 42, 30, 36, 13, 42, 6, 84, 48, 18, 18, 72, 0, 54, 12, 30, 30, 75, 24, 36, 24, 42, 18, 78, 12, 36, 30, 72, 0, 48, 6, 33, 36, 57, 36, 66, 6, 54, 0, 27, 36, 66, 12, 90, 0, 24, 3, 96, 24, 27, 24, 18, 24, 108, 12, 42, 48, 24, 18, 30, 0, 54, 18, 48, 12, 75, 18, 90, 21, 36, 12, 72, 12, 45, 24, 24, 0, 114, 0, 27, 30, 39, 33, 48, 12, 54, 12, 18, 42, 45, 27, 48, 0, 48, 6, 90, 9, 60, 42, 36, 12, 48, 0, 36, 42, 42, 18, 78, 0, 30, 6, 24, 33, 78, 9, 84, 30, 18, 15, 63, 18, 51, 30, 48, 0, 72, 6, 36, 51, 24, 30, 48, 21, 96, 6, 24, 6, 93, 12, 48, 0, 18, 6, 69, 18, 36, 18, 24, 18, 24, 6, 54, 36, 51, 33, 96, 0, 36, 15, 27, 30, 54, 30, 42, 12, 36, 0, 117, 36, 54, 36, 24, 0, 96, 3, 72, 36, 57, 27, 54, 6, 54, 21, 36, 12, 66, 33, 60, 0, 30, 24, 24, 15, 63, 30, 42, 24, 78, 9, 39, 30, 24, 24, 138, 0, 42, 0, 54, 24, 57, 12, 30, 24, 42, 18, 54, 6, 60, 33, 24, 0, 72, 6, 84, 24, 42, 6, 66, 15, 36, 0, 42, 48, 51, 18, 66, 0, 60, 3, 60, 12, 60, 57, 42, 9, 72, 12, 60, 42, 27, 24, 60, 0, 42, 18, 24, 30, 48, 30, 36, 18, 30, 9, 78, 12, 51, 18, 30, 0, 60, 0, 12, 57, 51, 18, 78, 6, 102, 12, 30, 24, 48, 27, 36, 0, 30, 12, 126, 6, 27, 36, 30, 18, 66, 0, 60, 30, 48, 36, 48, 0, 24, 6, 39, 24, 96, 12, 90, 33, 36, 6, 39, 6, 90, 27, 36, 0, 60, 12, 45, 42, 30, 30, 72, 12, 36, 9, 39, 36, 69, 24, 48, 0, 36, 6, 66, 15, 72, 39, 36, 27, 54, 18, 57, 30, 42, 12, 60, 0, 84, 24, 36, 27, 72, 12, 48, 21, 60, 0, 51, 30, 27, 30, 90, 0, 78, 0, 42, 57, 12, 30, 48, 18, 42, 6, 48, 24, 90, 15, 42, 0, 12, 15, 84, 24, 72, 18, 48, 21, 66, 3, 54, 42, 30, 24, 48, 0, 36, 18, 27, 12, 42, 9, 108, 18, 36, 12, 96, 24, 21, 30, 24, 0, 96, 9, 54, 18, 75, 30, 54, 18, 36, 0, 39, 18, 84, 18, 42, 0, 24, 6, 54, 18, 57, 42, 24, 9, 84, 18, 48, 42, 27, 30, 78, 0, 60, 0, 30, 48, 36, 6, 30, 36, 6, 10, 78, 12, 51, 48, 48, 0, 90, 0, 75, 9, 42, 24, 48, 15, 72, 12, 33, 42, 108, 12, 54, 0, 54, 18, 51, 42, 36, 48, 48, 12, 72, 0, 42, 18, 45, 30, 66, 0, 78, 3, 36, 15, 78, 30, 30, 30, 30, 15, 102, 12, 54, 18, 30, 0, 36, 6, 81, 48, 12, 24, 108, 6, 78, 18, 24, 36, 33, 18, 30, 0, 30, 0, 108, 21, 54, 42, 18, 18, 90, 6, 30, 48, 69, 36, 48, 0, 24, 15, 24, 15, 84, 24, 114, 6, 30, 0, 48, 6, 60, 42, 24, 0, 102, 12, 42, 42, 27, 21, 78, 9, 42, 24, 51, 24, 42, 12, 48, 0, 60, 12, 66, 6, 42, 24, 30, 24, 42, 0, 78, 24, 54, 12, 66, 0, 30, 6, 24, 51, 99, 18, 60, 24, 42, 18, 54, 6, 45, 60, 36, 0, 54, 6, 39, 39, 39, 30, 66, 18, 72, 0, 51, 24, 102, 12, 54, 0, 24, 0, 102, 12, 48, 24, 42, 36, 60, 0, 12, 48, 18, 12, 54, 0, 84, 18, 39, 9, 84, 30, 66, 18, 48, 15, 72, 48, 39, 42, 48, 0, 60, 0, 84, 30, 45, 33, 54, 6, 54, 30, 33, 30, 90, 6, 54, 0, 24, 6, 72, 27, 78, 12, 24, 15, 66, 0, 54, 36, 21, 42, 114, 0, 60, 3, 30, 33, 54, 27, 30, 33, 60, 6, 54, 12, 48, 33, 36, 0, 42, 12, 45, 39, 24, 36, 96, 18, 24, 12, 33, 18, 99, 18, 66, 0, 36, 0, 51, 24, 30, 30, 36, 15, 84, 6, 102, 48, 48, 18, 60, 0, 72, 12, 36, 42, 60, 12, 24, 21, 30, 0, 54, 18, 60, 18, 42, 0, 66, 6, 24, 24, 54, 15, 78, 12, 42, 27, 27, 30, 51, 27, 78, 0, 48, 6, 120, 27, 48, 42, 24, 12, 54, 6, 54, 24, 48, 36, 66, 0, 78, 9, 57, 21, 48, 18, 54, 33, 24, 30, 84, 18, 45, 33, 30, 0, 126, 9, 36, 30, 27, 30, 66, 18, 54, 0, 36, 42, 48, 6, 42, 0, 54, 6, 57, 12, 84, 54, 48, 6, 60, 6, 63, 18, 42, 36, 78, 0, 24, 24, 33, 24, 105, 24, 66, 27, 48, 0, 48, 30, 60, 30, 54, 0, 42, 3, 75, 48, 24, 12, 66, 12, 96, 6, 30, 12, 87, 21, 36, 0, 30, 24, 69, 12, 57, 30, 48, 24, 54, 0, 42, 54, 24, 24, 72, 0, 60, 0, 48, 24, 69, 24, 42, 18, 36, 12, 66, 24, 36, 42, 18, 0, 78, 9, 48, 36, 42, 42, 36, 12, 36, 21, 78, 18, 48, 12, 102, 0, 18, 12, 54, 24, 45, 27, 42, 13, 108, 12, 39, 24, 42, 27, 102, 0, 60, 6, 39, 24, 54, 12, 54, 24, 24, 0, 114, 24, 63, 48, 30, 0, 48, 6, 69, 36, 18, 12, 72, 6, 48, 18, 33, 54, 117, 12, 42, 0, 66, 12, 48, 6, 54, 36, 42, 21, 102, 6, 48, 54, 33, 30, 48, 0, 72, 0, 30, 24, 75, 24, 84, 30, 30, 0, 72, 18, 30, 42, 54, 0, 60, 12, 36, 45, 42, 12, 96, 6, 66, 0, 12, 36, 78, 36, 42, 0, 36, 0, 78, 24, 48, 24, 18, 30, 90, 15, 96, 18, 27, 21, 54, 0, 24, 21, 48, 27, 84, 18, 48, 42, 36, 6, 66, 12, 108, 12, 42, 0, 48, 9, 27, 60, 21, 36, 84, 6, 36, 18, 42, 18, 54, 18, 60, 0, 60, 15, 72, 9, 99, 42, 12, 12, 60, 0, 57, 42, 18, 18, 78, 0, 42, 6, 36, 36, 63, 9, 42, 15, 30, 18, 78, 6, 24, 48, 42, 0, 102, 12, 75, 45, 42, 30, 84, 24, 66, 9, 24, 30, 90, 24, 42, 0, 24, 3, 84, 21, 84, 33, 66, 24, 36, 6, 36, 48, 51, 18, 72, 0, 66, 18, 54, 30, 24, 18, 48, 18, 30, 0, 102, 12, 45, 36, 24, 0, 102, 3, 42, 15, 42, 54, 54, 21, 66, 24, 66, 30, 102, 3, 66, 0, 48, 12, 24, 30, 45, 36, 54, 6, 78, 9, 48, 24, 39, 36, 96, 0, 66, 6, 27, 27, 60, 30, 18, 30, 48, 12, 90, 24, 60, 36, 6, 0, 42, 12, 78, 36, 36, 24, 114, 6, 60, 0, 18, 6, 69, 18, 84, 0, 36, 6, 48, 6, 39, 24, 42, 24, 54, 6, 72, 48, 36, 42, 60, 0, 48, 0, 36, 18, 138, 24, 30, 30, 42, 18, 75, 18, 48, 18, 24, 0, 78, 0, 78, 57, 60, 9, 48, 9, 36, 30, 30, 42, 42, 39, 84, 0, 24, 12, 87, 27, 30, 42, 24, 24, 90, 0, 36, 24, 60, 36, 84, 0, 42, 0, 30, 21, 87, 12, 72, 24, 42, 12, 60, 30, 72, 21, 60, 0, 96, 12, 30, 42, 39, 18, 66, 12, 84, 12, 63, 42, 42, 24, 42, 0, 18, 6, 78, 15, 75, 45, 54, 12, 54, 6, 84, 30, 30, 18, 54, 0, 42, 24, 39, 27, 96, 18, 42, 21, 48, 0, 54, 18, 33, 36, 66, 0, 84, 0, 75, 48, 30, 42, 54, 12, 54, 15, 42, 30, 96, 18, 42, 0, 18, 6, 123, 15, 48, 24, 48, 39, 42, 6, 21, 54, 45, 12, 60, 0, 90, 12, 30, 36, 45, 18, 72, 21, 78, 12, 30, 12, 60, 30, 18, 0, 78, 6, 60, 36, 33, 18, 60, 12, 30, 0, 60, 18, 90, 30, 54, 0, 36, 1, 78, 27, 84, 30, 18, 15, 102, 9, 27, 30, 24, 57, 90, 0, 42, 9, 48, 42, 42, 12, 72, 27, 48, 9, 108, 18, 48, 48, 18, 0, 84, 6, 66, 24, 48, 21, 114, 6, 78, 24, 30, 30, 42, 18, 60, 0, 18, 12, 63, 9, 51, 66, 48, 15, 54, 0, 66, 60, 36, 18, 48, 0, 66, 6, 36, 30, 96, 9, 36, 30, 30, 24, 93, 24, 72, 24, 66, 0, 60, 24, 48, 30, 24, 30, 72, 6, 60, 12, 30, 12, 93, 18, 72, 0, 30, 0, 81, 30, 36, 48, 36, 30, 90, 6, 54, 24, 57, 24, 36, 0, 54, 18, 36, 24, 78, 18, 72, 33, 12, 0, 51, 30, 48, 24, 42, 0, 90, 3, 78, 30, 30, 27, 138, 6, 30, 18, 36, 24, 75, 24, 12, 0, 54, 12, 42, 18, 84, 36, 30, 18, 66, 6, 45, 36, 36, 48, 114, 0, 24, 6, 30, 21, 108, 15, 48, 18, 36, 18, 57, 24, 63, 42, 54, 0, 78, 6, 81, 36, 18, 24, 42, 18, 120, 0, 24, 24, 66, 12, 54, 0, 48, 12, 66, 18, 42, 36, 48, 18, 72, 6, 48, 48, 33, 6, 102, 0, 54, 24, 39, 54, 60, 12, 90, 18, 36, 3, 111, 24, 51, 48, 42, 0, 90, 0, 45, 36, 54, 48, 54, 24, 18, 18, 51, 18, 72, 0, 54, 0, 18, 12, 54, 36, 57, 18, 42, 18, 120, 0, 63, 42, 27, 36, 48, 0, 54, 6, 39, 30, 81, 18, 72, 33, 54, 9, 72, 12, 54, 54, 24, 0, 54, 15, 75, 24, 60, 12, 78, 6, 30, 12, 39, 54, 72, 6, 54, 0, 72, 6, 78, 12, 54, 39, 30, 15, 48, 6, 57, 48, 18, 24, 90, 0, 90, 18, 42, 24, 39, 42, 24, 30, 42, 0, 84, 6, 66, 30, 30, 0, 30, 0, 27, 42, 39, 33, 90, 24, 84, 18, 51, 36, 69, 24, 54, 0, 42, 18, 87, 33, 51, 18, 42, 9, 126, 9, 84, 36, 66, 18, 54, 0, 36, 0, 66, 12, 48, 15, 54, 30, 18, 18, 60, 18, 96, 54, 42, 0, 102, 0, 27, 36, 30, 36, 108, 15, 54, 0, 24, 36, 60, 24, 66, 0, 30, 0, 54, 15, 75, 48, 36, 18, 48, 24, 36, 36, 54, 15, 108, 0, 84, 18,});

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    f(i, 0, n){
        cout << arr[i] << endl;
    }
}