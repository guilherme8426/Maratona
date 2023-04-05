//https://neps.academy/br/exercise/466
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a,soma, idx_max, max=0, ans=0;
    cin >> n;

    vector<int> b(n, 0);

    for(int i=0; i<n; i++){
        cin >> a;
        b[i] = a;

        if((b[i]+b[0]+i)>max){
            max = b[i]+b[0]+i;
            idx_max = i;
        }
    }

    for(int i=0; i<n; i++){
        if(i == idx_max) continue;

        soma = b[idx_max] + abs(idx_max - i) + b[i];
        if(soma > ans)ans = soma;
        
    }

    
    cout << ans << "\n";


    return 0;
}