#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, k, att,ans=0;
    cin >> n >> m >> k;
    vector<long long> candidatos(n);
    vector<long long> apartamentos(m);

    for(int i=0; i<n; i++){
        cin >> candidatos[i];
    }
    sort(candidatos.rbegin(), candidatos.rend());

    for(int i=0; i<m; i++){
        cin >> apartamentos[i];
    }
    sort(apartamentos.rbegin(), apartamentos.rend());

    att=0;
    for(int i=0;i<m;i++){
    
        if(att>=n) break;

        while(candidatos[att]-k > apartamentos[i]){
            att++;
            if(att>=n) break;
        }
        if(candidatos[att]+k>=apartamentos[i] && candidatos[att]-k<=apartamentos[i]){
            ans++;
            att++;
        }
    }

    cout << ans << "\n";

    return 0;
}