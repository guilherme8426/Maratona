// Ta bom, agora com DP
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, max_d;
    cin >> n;
    int DP[n+1];
    DP[0] = 0;  

    for(int i=1; i<=n; i++){
        max_d = 0;
        for(auto numero: to_string(i))
            if(max_d<(numero-'0')) max_d = numero-'0';
        DP[i] = DP[i-max_d]+1;
    }

    cout << DP[n] << "\n";

    return 0;
}