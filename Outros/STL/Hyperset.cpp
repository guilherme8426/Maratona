#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, ans=0;
    string carta;
    cin >> n >> k;
    unordered_set<string> cartas;
    vector<string> cartas_v(n);

    for (int i = 0; i < n; i++){ 
        cin >> cartas_v[i];
        cartas.insert(cartas_v[i]);
    }

    for(int a=0; a<n; a++){
        for(int b=a+1; b<n; b++){
            carta = "";
            for (int i = 0; i < k; i++){
                if(cartas_v[a][i]==cartas_v[b][i]) carta += cartas_v[a][i];
                if((cartas_v[a][i]== 'S' && cartas_v[b][i]=='E') || (cartas_v[a][i]== 'E' && cartas_v[b][i]=='S')) carta += 'T';
                if((cartas_v[a][i]== 'E' && cartas_v[b][i]=='T') || (cartas_v[a][i]== 'T' && cartas_v[b][i]=='E')) carta += 'S';
                if((cartas_v[a][i]== 'T' && cartas_v[b][i]=='S') || (cartas_v[a][i]== 'S' && cartas_v[b][i]=='T')) carta += 'E';                
            }               

            if(cartas.find(carta) != cartas.end()) ans++;
        }
    }

    cout << ans/3 << "\n";

    return 0;
}