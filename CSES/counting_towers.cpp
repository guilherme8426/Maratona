#include <bits/stdc++.h> 

#define MOD 1000000007
#define ll long long

using namespace std; 

ll DP[1000002][2];

void calcula_torre(){
    DP[1][0]=1; // laranja (sem separação)
    DP[1][1]=1; // verde   (com separação)

    for(int i=1; i<1000000; i++){
        DP[i][0] %= MOD;
        DP[i][1] %= MOD;
        DP[i+1][0]  = 2*DP[i][0];
        DP[i+1][1]  = DP[i][0];
        DP[i+1][0] += DP[i][1];
        DP[i+1][1] += 4*DP[i][1];
    }
}

int main(){   

    ll n, x;
    cin >> n;

    calcula_torre();

    while(cin >> x){
        cout << (DP[x][0] + DP[x][1])%MOD << "\n";
    }
    
    return 0; 
}