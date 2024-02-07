#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n, ans;
    cin >> t;

    while(cin >> n){
        vector<int> num(n), cnt(n+1, 0);

        for(int i=0; i<n; i++){
            cin >> num[i]; 
            cnt[num[i]]++;
        }

        ans = 0;

        for(int j=0; j<n; j++){
            int soma = 0;
            for(int k=j; k<n; k++){
                soma += num[k];
                if(j==k) continue;
                if(soma<=n){
                    ans += cnt[soma];
                    cnt[soma] = 0;
                }
            }   
        }
        
        cout << ans << "\n";
    }
    

    return 0;
}