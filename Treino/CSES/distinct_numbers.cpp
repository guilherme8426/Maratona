#include <bits/stdc++.h>

using namespace std;

int main(){

    long long t, a, ant, ans=0;
    vector<long long> numeros(2*(10e5), 0);
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> a;
        numeros[i] = a;
    }
    
    sort(numeros.begin(), numeros.end());

    ant = 0;
    for(auto elemento: numeros){
        if(elemento != ant){
            ant = elemento;
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}