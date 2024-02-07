#include <bits/stdc++.h>

#define MOD 1000000007
#define MAXN 1000001
#define ll long long

using namespace std;

int DP[501][MAXN];
int n;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    ll x=0;
    cin >> n;
    ll NUM[n];
    for(ll i=0; i<n; i++){
        NUM[i] = i+1;
        x+=i+1;
    }

    if(x%2==1){
        cout << 0 << "\n";
        return 0;
    }

    x = x/2;
    DP[0][0] = 1;
    // for(ll i=0; i<=n; i++) DP[i][0] = 1;

    for(ll j=1; j<=n; j++)
        for(ll i=0; i<=x; i++){
            DP[j][i] = DP[j-1][i];
            if(i - NUM[j-1] >=0){
                DP[j][i] += DP[j-1][i-NUM[j-1]];
                DP[j][i] %= MOD;
            }
        }

    if(DP[n][x]%2 == 1) DP[n][x] += MOD; //Pra não dar merda na arritimetica modular
    cout << DP[n][x]/2 << "\n"; 

    return 0;
}