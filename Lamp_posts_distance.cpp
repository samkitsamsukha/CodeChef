#include <iostream>
#include <vector>

using namespace std;

long long fac(int num) {
    long long r = 1;
    for (int i = 2; i <= num; ++i) {
        r *= i;
    }
    return r;
}

long long bino(int n, int k) {
    if (k > n) return 0;
    return fac(n) / (fac(k) * fac(n - k));
}

long long countWays(int n, int k) {
    return ;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << bino(n + k - 1, k - 1) << endl;
    return 0;
}
