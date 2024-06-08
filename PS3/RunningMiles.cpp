#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e19;
 
void solve() {
    int n;
    cin >> n;
    int b[n],f[n],g[n];
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        f[i] = b[i] + i;
        g[i] = b[i] - i;
    }
    f[0] = -inf; g[n + 1] = -inf;
    for (int i = 1; i <= n; i++) {
        f[i] = max(f[i], f[i - 1]);
    }
    for (int i = n; i >= 1; i--) {
        g[i] = max(g[i], g[i + 1]);
    }
    int ans = -inf;
    for (int i = 2; i <= n - 1; i++) {
        ans = max(ans, f[i - 1] + b[i] + g[i + 1]);
    }
    cout << ans << "\n";
}
 
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t; 
    cin>>t;
	while(t--)
        solve();
 
	return 0;
}