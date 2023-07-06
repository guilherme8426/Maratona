#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, acc, att, aux, cont;

    cont = 0;
    while(cin >> n){
        acc = 0; 
        aux = 0;
        cont++;
        cout << "Instancia " << cont << "\n";
        for(int i=0; i < n; i++){
            cin >> att;
            if(att == acc && aux == 0){
                cout << att << "\n\n";
                aux = 1;
            }
            acc+= att;
        }

        if(aux == 0) cout << "nao achei\n\n";
    }


    return 0;
}