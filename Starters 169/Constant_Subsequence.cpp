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
#define pii pair<int,int>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define sti stack<int>
#define INF INT64_MAX
#define pb push_back
#define MOD1 998244353
#define nl '\n'
#define PI 3.141592653589793238462

mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());

bool possible(vi& p, vi& n, int mid){
    int pos = 0;
    int neg = 0;
    int sum = 0;
    int maxi = 0;
    while(pos < p.size() || neg < n.size()){
        int x = 0;
        if(pos < p.size()) x = p[pos];
        while(sum + x > mid){
            if(neg < n.size()){
                sum += n[neg];
                maxi = max(maxi, sum);
                neg++;
            } 
            else {
                return false;
            }
            sum = max(0LL, sum);
        }
        
        if(pos < p.size()){
            sum += p[pos];
            maxi = max(maxi, sum);
            pos++;
        }
        else if(neg < n.size()){
            sum += n[neg];
            maxi = max(maxi, sum);
            neg++;
            sum = max(0LL, sum);
        }
    }
    
    return maxi <= mid;
}

void solve() {
    int num;
    cin >> num;
    vi p;
    vi n;
    int x;
    for(int i = 0; i < num; i++){
        cin >> x;
        if(x >= 0) p.pb(x);
        else n.pb(x);
    }
    if(p.empty()){
        cout << 0 << nl;
        return;
    }
    int maxi = *max_element(p.begin(), p.end());
    int sum = accumulate(p.begin(), p.end(), 0LL);
    int ans = sum;
    int l = maxi;
    int r = sum;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(possible(p, n, mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << nl;
}

signed main() {
    fastIO;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
