#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ll N = 4, X = 10;
    ll arr[N] = { 7, 2, 3, 9 };

    sort(arr, arr + N);
    ll l = 0, h = N - 1;
    ll ans = 0;

    while (h >= l) {
        if (arr[l] + arr[h] <= X) {
            ans++;
            l++;
            h--;
        } else {
            ans++;
            h--;
        }
    }
    cout << ans << endl;
}
