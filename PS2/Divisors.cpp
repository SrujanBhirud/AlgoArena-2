#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
const int MAX = 1000000;
vector<int> lowprime(MAX,0);
vector<int> primes;

void sieve(){
    for (int i = 2; i <= MAX; i++) {
        if (lowprime[i] == 0) {
            lowprime[i] = i;
            primes.push_back(i);
        }
        for (int j = 0; i * primes[j] <= MAX; j++){
            lowprime[i*primes[j]] = primes[j];
            if(primes[j] == lowprime[i]) break;
        }
    }
}



int main(){
    int x,n;
    cin >> n;
    sieve();
    for(int i = 0; i <n ;i++){
        cin >> x;
        int ans = 1;
        while(x>1){
            int count = 1;
            int constant = x;
            while(x % lowprime[constant] == 0){
                x /= lowprime[constant];
                count++;
            }
            ans *= count;
        }
        cout << ans << endl;
        }

    return 0;
}

