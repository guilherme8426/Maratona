#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, drua, aux, max_local, max_tot = 0;
    cin >> n;

    vector<int> b(n, 0);

    for(int i=0; i<n; i++){
        cin >> a;
        b[i] = a;
    }

    for(int i=0; i<n; i++){
        drua = 1-i;
        max_local = 0;
        for(int j=0; j<n; j++){
            drua++;
            if(i != j){
                aux = b[j] + abs(drua) + b[i];
                if(aux>max_local) max_local = aux;
            }
        }
        if(max_local>max_tot) max_tot = max_local;
    }

    cout << max_tot -2 << "\n";


    return 0;
}