#include <bits/stdc++.h>

#define MOD 1000000007
#define MAXN 1000001
#define ll int

using namespace std;

int DP[MAXN];
int n;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    ll x;
    cin >> n >> x;
    int NUM[n];
    for(int i=0; i<n; i++) cin >> NUM[i];

    // memset(DP, 0, sizeof(DP));
    DP[0] = 1;

    for(int i=1; i<=x; i++)
        for(int j=0; j<n; j++)
            if(i - NUM[j] >=0){
                DP[i] += DP[i-NUM[j]];
                DP[i] %= MOD;
            }

    cout << DP[x] << "\n";

    return 0;
}