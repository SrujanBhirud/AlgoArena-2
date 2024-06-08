#include<iostream>
#include<vector>
using namespace std;

const int MAX_VAL = 1e6;

int maxGCD(const vector<int>& arr) {
    vector<int> vec(MAX_VAL + 1, 0);
    for (int x : arr) {
        vec[x]++;
    }
    for (int i = MAX_VAL; i > 0; i--) {
        int div = 0;
        for (int j = i; j <= MAX_VAL; j += i)
            div += vec[j];
        if (div >= 2) 
            return i;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout <<  maxGCD(arr) << endl;
    return 0;
}
