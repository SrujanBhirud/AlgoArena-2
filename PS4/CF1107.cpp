#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string str;
    cin >> n >> str;
    
    if (n==2 && str[0] >= str[1]) cout << "NO" << endl;
    else{
        cout << "YES" << endl << 2 << endl;
        cout << str[0] << " ";
        for(int i =1;i<n;i++){
            cout << str[i];
        }
        cout << endl;
    }
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