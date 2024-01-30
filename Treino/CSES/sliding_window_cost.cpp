#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define ll long long 

using namespace __gnu_pbds;
using namespace std;

typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    // cout << x << " " << mediana << "\n\n";
    vector<ll> numeros(n);
    indexed_multiset janela;
    for(ll i=0; i<x; i++){
        ll numero; cin >> numero;
        numeros[i] = numero;
        janela.insert(numero);
    }

    ll P = *janela.find_by_order((x+1)/2-1);
    ll d = 0;
	for(ll i=0;i<x;++i)d+=abs(numeros[i]-P);
    cout<<d<<" ";
    for(ll i=0; i<n-(x); i++){
        cin >> numeros[i+x];
        janela.erase(janela.find_by_order(janela.order_of_key(numeros[i])));
        janela.insert(numeros[i+x]);

        ll p=*janela.find_by_order((x+1)/2-1);
        d+=abs(p-numeros[i+x])-abs(P-numeros[i]);

        if(x%2==0)d-=p-P;
		P=p;
		cout<< d << " ";
        
    }

    cout << "\n";

    return 0;
}
