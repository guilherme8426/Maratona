#include <bits/stdc++.h>

#define MOD 1000000007
#define ll int

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    ll n;
    cin >> n ;
    vector<vector<bool>> matriz(n,vector<bool>(n));
    vector<vector<int>> DP(n+1,vector<int>(n+1, 0));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char a; cin >> a;
            if(a == '.') matriz[i][j] = true;
            else matriz[i][j] = false;
        }
    }

    if(!matriz[n-1][n-1]){
        cout << "0\n";
        return 0;
    }

    for(int j=n-1; j>=0; j--){
        for(int i=n-1; i>=0; i--){
            if(i==n-1 && j==n-1){ DP[i][j] = 1; continue; }
            
            if(matriz[i][j]){
                DP[i][j] = DP[i][j+1] + DP[i+1][j];
                DP[i][j] %= MOD;
            }
        }
    }

    cout << DP[0][0] << "\n";

    return 0;
}