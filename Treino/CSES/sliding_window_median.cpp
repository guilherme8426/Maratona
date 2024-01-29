#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define ll int 

using namespace __gnu_pbds;
using namespace std;

typedef tree<int,null_type,less_equal<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

    ll n, x, mediana;
    cin >> n >> x;
    mediana = x/2;
    if(x%2==0) mediana--;
    // cout << x << " " << mediana << "\n\n";
    vector<ll> numeros(n);
    indexed_multiset janela;
    for(int i=0; i<x-1; i++){
        ll numero; cin >> numero;
        numeros[i] = numero;
        janela.insert(numero);
    }

    for(int i=0; i<n-(x-1); i++){
        cin >> numeros[i+x-1];
        janela.insert(numeros[i+x-1]);
        cout << *(janela.find_by_order(mediana)) << " ";
        janela.erase(janela.find_by_order(janela.order_of_key(numeros[i])));
    }

    cout << "\n";

    return 0;
}
