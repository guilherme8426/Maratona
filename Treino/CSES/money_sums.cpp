#include <bits/stdc++.h>
 
#define MOD 1000000007
#define MAXN 1000001
#define ll int
 
using namespace std;
 
bool DP[102][MAXN];
int n;
 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll sum=0, ans=0;
    cin >> n;
    int NUM[n+1];
    for(int i=1; i<=n; i++){
        cin >> NUM[i];
        sum += NUM[i];
    }
 
    DP[0][0] = true;

    for(int i=1; i<=n; i++){ //para cada moeda (i tem a quantidadede moedas)
        for(int j=0; j<=sum; j++){ //para cada soma
            DP[i][j] = DP[i-1][j];

            if(j-NUM[i]>=0 && DP[i-1][j-NUM[i]]){
                DP[i][j] = 1;
            }

            if(i==n && DP[i][j] && j){
                ans++;
                DP[101][j] = true;
            }
        }
    }       

    cout << ans << "\n";
    for(int j=1; j<=sum; j++){
        if(DP[101][j]){
            cout << j << " ";
        }
    }

    cout << "\n";
 
    return 0;
}
