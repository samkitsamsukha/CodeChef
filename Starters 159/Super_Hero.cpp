#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl '\n'

int count_prime_factors(int n) {
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            count++;
            n /= i;
        }
    }
    if (n > 2) {
        count++;
    }
    return count;
}

void solve() {
    int h, k;
    cin >> h >> k;
    // cout << count_prime_factors(h) << nl;
    // cout << count_prime_factors(k) << nl;
    int t = 2;
    int maxi = 1;
    if(k == 1) maxi = 0;
    else while(t*2<=k){
        t = t*2;
        maxi++;
    }
    // for (int i = 1; i <= k; i++) {
    //     maxi = max(maxi, count_prime_factors(i));
    // }
    cout << count_prime_factors(h)+maxi << nl;
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
