#include <bits/stdc++.h>

#define MOD 1000000007
#define MAXN 1000001

using namespace std;

int DP[MAXN];

int conput(int left){
    if(DP[left] != 0){
        return DP[left];
    }
    for(int i=1; i<=6; i++){
        if(left-i >= 0){
            DP[left] += conput(left - i);
            DP[left] %= MOD;
        }
    }
    return DP[left];
}

int main(){

    long long n;
    memset(DP, 0, sizeof(DP));
    DP[0] = 1;

    cin >> n;

    cout << conput(n) << "\n";

    return 0;
}