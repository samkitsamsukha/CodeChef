#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// order_of_key(k) : no. of elements < k
// *find_by_order(i) : value at index i (0-based)

#define int long long int
#define ll long long
#define ld long double 
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vi>
#define vpii vector<pii>
#define memset(arr,val) memset(arr,val,sizeof(arr))
#define INF INT64_MAX
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
#define rep(i,x,y) for(int i=x; i<y; i++)
#define rrep(i,x,y) for(int i=x; i>=y; i--)
#define setbits(n)  __builtin_popcountll(n)
#define bitsize(n) (63 - __builtin_clzll(n))
#define lcm(a,b) (a/__gcd(a, b)*b)
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
// #define MOD1 1000000007
#define MOD1 998244353
#define nl '\n'
#define PI 3.141592653589793238462

mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s;
    cin >> t;
    if(s[0]!=t[0]){
        cout << -1 << nl;
        return;
    }
    if(s==t){
        cout << 0 << nl;
        return;
    }
    if(n>m){
        swap(n, m);
        swap(s, t);
    }
    string p = "", su = "";
    int i = 0;
    for(i = 0; i<n; i++){
        if(s[i]==t[i]){
            p = p+s[i];
            continue;
        }
        break;
    }
    int j1 = n;
    int j2 = m;
    while(j2>=i){
        if(s[j1] == t[j2]){
            su = su + t[j2];
        }
        j1--;
        j2--;
    }
    string ans = p+su;
    remove(ans.begin(), ans.end(), ' ');
    cout << "pre: " << p << nl;
    cout << "suf: " << su << nl;
    cout << "add: " << ans << nl;
    if(p+su == t){
        cout << 1 << nl;
    }
    else{
        cout << 2 << nl;
    }
}

signed main() {

    fastIO;
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}