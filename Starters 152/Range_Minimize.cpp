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

void merge(vector<int> &arr, int low, int mid, int high)  // Pass arr by reference
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while ((left <= mid) && (right <= high))
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) 
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];  // Update the original array
    }
}

void mergeSort(vector<int> &arr, int low, int high)  // Pass arr by reference
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

void solve() {
    given
    vi a(n);
    take(a, n)
    mergeSort(a, 0, n-1);
    // show(a, n)
    // 1
    int x = a[n-3] - a[0];
    int y = a[n-2] - a[1];
    int z = a[n-1] - a[2];
    cout << min(x, min(y, z)) << nl;
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