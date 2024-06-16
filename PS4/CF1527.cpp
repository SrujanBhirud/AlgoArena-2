#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int temp = log2(n);
    int ans = (1<<temp) - 1;
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}