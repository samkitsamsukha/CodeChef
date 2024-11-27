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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    
    vector<vector<int>> a(n, vector<int>(m, 0));
    int sp = 0;

    
    for (int i = 0; i < n * m; i++) {
        int row = i / m; 
        int col = i % m;  
        
        if (a[row][col] == 0) { 
            if (s[sp] == 'A') {
                for (int j = 0; j < m; j++) {
                    a[row][j] = 1;
                }
                for (int j = 0; j < n; j++) {
                    a[j][col] = 1;
                }
            } else if (s[sp] == 'B') {
                for (int j = 0; j < m; j++) {
                    a[row][j] = 2;
                }
                for (int j = 0; j < n; j++) {
                    a[j][col] = 2;
                }
            }
            sp = (sp + 1) % s.length();
        }
    }
    int alice = 0, bob = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i][j] == 1){
                alice++;
            }
            else bob++;
            // cout << a[i][j] << " ";
        }
        // cout << endl;
    }
    if(alice == bob) cout << "Draw" << nl;
    else if(alice > bob) cout << "Alice" << nl;
    else cout << "Bob" << nl;
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