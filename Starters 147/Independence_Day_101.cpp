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
#define pop st.pop();
#define top st.top();
#define push(a) st.push(a);
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
#define PI 3.141592653589793238462

void solve() {
    int o, w, g;
    cin >> o >> w >> g;
    int maxi = max(o, max(w, g));
    int two = o + w + g - maxi;
    if(maxi <= (o + w + g + 1) / 2){
        yes
        return;
    }
    no
    return;
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