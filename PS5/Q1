#include <bits/stdc++.h>
#include <queue>
#include <iostream>

using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> iPair;
#define For(i,n) for (int i = 0; i < n; i++)
#define aFor(i, a, n) for (int i = a; i < n; i++)


int main(){
    int n,x;
    cin >> n >> x;
    int price[n], pages[n];
    For(i,n){
        cin >> price[i];
    }
    For(i,n){
        cin >> pages[i];
    }
    int dp[n+1][x+1];
    
    For(i,n+1) {
        For(w,x+1){
            if(i == 0 || w == 0)
                dp[i][w] = 0;
            else if (price[i - 1] <= w)
                dp[i][w] = max(pages[i - 1] + dp[i - 1][w - price[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    cout << dp[n][x]<< endl;


    return 0;
}
