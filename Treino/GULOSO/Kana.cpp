#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, d, v, r, aux;

    cin >> t;

    for(int i=0; i<t; i++){
        cin >> d >> v >> r;
        aux = 0;

        if(10*r>=d) aux = 1;

        for(int j=0; j< v; j++){
            d = (d/2)+10;
            if(10*r>=d) aux = 1;
        }

        cout << (aux?"YES\n":"NO\n");
    }

    return 0;
}