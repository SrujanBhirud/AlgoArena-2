
#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    if(a < b) 
        swap(a, b);
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
        
    int n; cin >> n;
    vector<int> v(n);
    for(int & i : v) 
        cin >> i;
        
    vector<int> p(n), s(n);
    int g = 0;
    for(int i = 0; i < n; i++){
        g = gcd(g, v[i]);
        p[i] = g;
    }
    g = 0;
    for(int i = n - 1; i >= 0; i--){
        g = gcd(g, v[i]);
        s[i] = g;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        int now = 0;
        if(i) now = gcd(now, p[i - 1]);
        if(i + 1 < n) now = gcd(now, s[i + 1]);
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}