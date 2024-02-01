//https://www.beecrowd.com.br/judge/pt/problems/view/2243
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int t[n], sub, aux, max_local, max = 1;

    for(int i=0; i<n; i++) cin >> t[i];

    for(int i=0; i<n; i++){

        max_local = 1;
        aux = 1;
        sub = 1;
        for(int j=i; j<n; j++){
            if(aux<=t[j]){
                if(sub){
                    max_local = aux;
                    aux++;
                }
                else{
                    aux --;
                }
                cout << "   " << j <<' '<< max_local << ' ' << aux << "\n";
            }
            else{
                sub = 0;
                max_local = 4;
                cout << "   " << max_local << ' ' << t[j]-1 << ' ' << (aux-2) - t[j]<< "\n";
                aux = t[j]-1;
            }       
            if(aux<=1) break;
        }
        cout << i << ": " << max_local << '\n';
    }

    return 0;
}