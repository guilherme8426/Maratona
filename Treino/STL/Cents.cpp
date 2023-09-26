#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--){
        int n, c;
        double valor, total=0;
        string moeda;
        unordered_map<string, double> mapa;
        cin >> n >> c;
        mapa["JD"] = 1;
        while (n--){
            cin >> moeda >> valor;
            mapa[moeda] = valor;
        }
        
        while (c--){
            cin >> valor >> moeda;
            total += valor*mapa[moeda];
        }

        printf("%.6f\n", total);
    }
    
    return 0;
}