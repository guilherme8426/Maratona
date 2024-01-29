#include <bits/stdc++.h>
#define ll int

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    vector<pair<ll,ll>>numeros;
    for(int i=0; i<n; i++){
        ll numero;
        cin >> numero;
        numeros.push_back({numero, i});
    }
    sort(numeros.begin(), numeros.end());

    vector<pair<int, pair<int, int>>> somas;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(numeros[i].first + numeros[j].first >= x) continue;
            somas.push_back({numeros[i].first + numeros[j].first,{numeros[i].second, numeros[j].second}});
        }
    }
    sort(somas.begin(), somas.end());

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(numeros[i].first + numeros[j].first >= x) continue;

            int l = -1, r = somas.size(), k = x - (numeros[i].first + numeros[j].first);
            while (r - l > 1) {
                int m = (l + r) / 2;

                if(k == somas[m].first && somas[m].second.first!=numeros[i].second && somas[m].second.first!=numeros[j].second && somas[m].second.second!=numeros[i].second && somas[m].second.second!=numeros[j].second){
                    cout << numeros[i].second +1 << " " << numeros[j].second +1 << " " << somas[m].second.first +1 << " " << somas[m].second.second +1 << "\n";
                    return 0;
                }

                if(k < somas[m].first){
                    r = m; // a[l] <= k < a[m] <= a[r]
                } else{
                    l = m; // a[l] <= a[m] <= k < a[r]
                }
            }

        }   
    }
   
    cout << "IMPOSSIBLE\n";

    return 0;
}
