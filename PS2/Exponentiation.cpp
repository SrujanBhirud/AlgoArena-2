#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
const ll MOD  = 1000000007;

using namespace std;

ll pow(ll a, ll b){
    ll t;
    if(b == 0) return 1;
    if(a == 0) return 0;
    t = pow(a,b/2);
    t = (t*t) % MOD;

    if(b%2 == 1){
        t = (a*t) % MOD;
    }
    return t;
}

int main(){
    ll a,b,n;
    cin >> n;
    for(int i = 0; i <n ;i++){
        cin >> a >> b;
        cout << pow(a,b) << endl;
    }

    return 0;
}