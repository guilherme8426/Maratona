#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a;
    cin >> n;
    vector<int> numeros(n+1, 0);
    while(cin >> a){
        numeros[a] = a;
    }
    for(int i=1; i<=n; i++){
        if(!numeros[i]) cout << i << "\n";
    }

    return 0;
}