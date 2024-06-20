#include <bits/stdc++.h>
#include <queue>
#include <iostream>

using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> iPair;
#define For(i, n) for (int i = 0; i < n; i++)
#define aFor(i, a, n) for (int i = a; i < n; i++)
#define FastInput ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const ll MOD = 1e9+7;

int main(){
    FastInput;
    int h,w,flag = 0;
    cin >> h >> w;
    char graph[h][w];
    ll dp[h][w];
    
    For(i,h){
        For(j,w){
            cin >> graph[i][j];
            dp[i][j] = 0;
        }
    }
    
    For(i,h){
        if(graph[i][0] == '#')   flag = 1;
        if(flag)                 dp[i][0] = 0;
        else                     dp[i][0] = 1;
    }
    
    flag = 0;

    For(j,w){
        if(graph[0][j] == '#')   flag = 1;
        if(flag)                 dp[0][j] = 0;
        else                     dp[0][j] = 1;
    }

    dp[0][0]= 0;
    
    aFor(i,1,h){
        aFor(j,1,w){
            if(graph[i-1][j] != '#')
                dp[i][j] += dp[i-1][j];
            if(graph[i][j-1] != '#')
                dp[i][j] += dp[i][j-1];
            dp[i][j] %= MOD;
        }
    }

    cout << dp[h-1][w-1];
    return 0;
}
