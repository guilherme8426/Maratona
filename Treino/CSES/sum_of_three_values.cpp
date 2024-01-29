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

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(numeros[i].first + numeros[j].first >= x) continue;

            int l = j, r = n, k = x - (numeros[i].first + numeros[j].first);
            while (r - l > 1) {
                int m = (l + r) / 2;

                if(k == numeros[m].first && numeros[m].second!=numeros[i].second && numeros[m].second!=numeros[j].second){
                    cout << numeros[i].second +1 << " " << numeros[j].second +1 << " " << numeros[m].second +1 << "\n";
                    return 0;
                }

                if(k < numeros[m].first){
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
