#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define vi vector<int>
#define pb push_back
#define pii pair<int,int>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define sti stack<int>
#define pop st.pop();
#define top st.top();
#define push(a) st.push(a);
#define given                   \
    int n;                      \
    cin >> n;
#define take(a, n)              \
    for (int j = 0; j < n; j++) \
        cin >> a[j];
#define show(a, n)              \
    for (int j = 0; j < n; j++) \
        cout << a[j] << ' ';    \
    cout << '\n';
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define MOD1 998244353
#define nl '\n'
#define PI 3.141592653589793238462

void solve() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector<string> a(m);
    take(a, m)
    for(int i = 0; i<n; i++){
        int c1 = 0, c0 = 0, c2 = 0;
        for(int j = 0; j<m; j++){
            if(a[j][i] == '1') c1++;
            else if(a[j][i] == '0') c0++;
            else c2++;
        }
        // cout << c0 << " " << c1 << " " << c2 << nl;
        int mini = min(c1, c0);
        int maxi = max(c1, c0);
        if(maxi-mini >= c2){
            mini = mini+c2;
        }
        else{
            c2 = c2 - (maxi-mini);
            mini = maxi;
            if(c2%2 == 0){
                mini = mini + c2/2;
                maxi = maxi + c2/2;
            }
            else{
                mini = mini + c2/2;
                maxi = maxi + 1 + c2/2;
            }
        }
        ans = ans + (maxi*mini);
    }
    cout << ans << nl;
}

signed main() {

    fast_io()
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}