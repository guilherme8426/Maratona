#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, aux;

    while(cin >> n >> m){
        vector<int> voltou((10e4)+10, 0);
        while(m--){
            cin >> a;
            voltou[a]++;
        }

        aux = 0;
        for(int c=1; c<n+1; c++){
            if(!voltou[c]){
                cout << c << " ";
                aux = 1;
            }
        }

        if(!aux) cout << "*";
        cout << "\n";
    }

    return 0;
}