#include <bits/stdc++.h>
#include <iostream>

typedef long long ll;
const ll MOD  = 1000000007;
const ll PHI_MOD = 1000000006;

using namespace std;

ll pow_mod(ll a, ll b, ll mod) {
    ll result = 1;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }
    return result;
}

int main(){
    ll a, b, c, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        ll exp = pow_mod(b, c, PHI_MOD);
        ll result = pow_mod(a, exp, MOD);
        
        cout << result << endl;
    }
    return 0;
}
