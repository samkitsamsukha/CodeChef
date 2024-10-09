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
#define yes cout << "Yes" << '\n';
#define no cout << "No" << '\n';
#define nl '\n'
#define MOD1 998244353
#define PI 3.141592653589793238462

signed main() {

    fast_io()
    
    int win, draw, lost;
    cin >> win >> draw >> lost;
    double my = win + draw*0.5;
    double opp = draw*0.5 + lost;
    // cout << "my " << my << endl;
    // cout << "opp " << opp << endl;
    int rem = 4-win-draw-lost;
    if(my+rem > opp) yes
    else no
    
    return 0;
}