#include <bits/stdc++.h>
#include <queue>
#include <iostream>

using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> iPair;
#define FastInput ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i, n) for (int i = 0; i < n; i++)
#define aFor(i, a, n) for (int i = a; i < n; i++)
#define pb push_back

double all_head;
vector<double> hprod;
vector<double> tprod;

double prob_tail(int start,int end){

    double answer;
    if (start = 0)
        return (all_head/hprod[end] * tprod[end]);
    answer = all_head/(hprod[end]/hprod[start-1])  * (tprod[end]/tprod[start-1]);
    return answer;
}

int main(){
    FastInput;
    int n;
    cin >> n;
    double p[n];

    cin >> p[0];
    hprod.pb(p[0]);
    tprod.pb(1-p[0]);

    aFor(i,1,n){
        cin >> p[i];
        hprod.pb(p[i] * hprod[i-1]);
        tprod.pb((1-p[i]) * tprod[i-1]);
    }

    all_head = hprod[n-1];

    double sol = 0;

    For(tail_size,n/2){
        For(i,n-tail_size){
            sol += prob_tail(i,i+tail_size);
        }
    }
    cout << sol;

    return 0;
}
