#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, meio;
    long long som=0;
    cin >> n;
    vector<int> numeros(n);
    
    for(int i=0;i<n;i++)    cin >> numeros[i];
    
    sort(numeros.begin(), numeros.end());

    meio = numeros[n/2];

    for(auto a: numeros){
        som += abs(meio-a);
    }
    
    cout << som << "\n";

    return 0;
}