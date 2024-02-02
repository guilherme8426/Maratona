#include <bits/stdc++.h>

#define ll long long
#define INF 1e9

using namespace std;

int main(){

    ll n, num, att;
    cin >> n;

    vector<ll> dp(n+1, INF);
    dp[0] = -INF;

    for(int i=0; i<n; i++){
        cin >> num;
        att = upper_bound(dp.begin(), dp.end(), num) - dp.begin();
        if(num>dp[att-1] && num<dp[att]) dp[att]=num;
    }

    for(int i=n; i>0; i--){
        if(dp[i]!=INF){
            cout << i << "\n";
            break;
        }
    }


    return 0;
}


//Solução O(n^2) não passa no tempo, solução acima é O(nlogn) pois usa busca binaria 
/*
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll n;
    cin >> n;

    vector<ll> num(n), dp(n, 1);

    for(int i=0; i<n; i++) cin >> num[i];

    dp[0] = 1;

    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(num[j]<num[i]) dp[i] = max(dp[j]+1, dp[i]);
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << "\n";

    return 0;
}
*/