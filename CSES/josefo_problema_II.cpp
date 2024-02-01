#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// Estrutura de arvore, adicionar isso para usar 
// #include <ext/pb_ds/assoc_container.hpp> 
// using namespace __gnu_pbds;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, passo, att;
    cin >> n >> passo;
    indexed_set numeros;

    for(int i=0; i<n; i++) numeros.insert(i+1);

    att = passo%n;
    while(n--){
        auto iterator = numeros.find_by_order(att);
        cout << *iterator << " ";
        numeros.erase(iterator);

        if(n){
            att = (att%n + passo)%n;
        //  att recebe o index a ser retirado. 
        //  em att%n a gente atualiza o index atual para o novo tamanho da roda que é n
        //  att%n + passo adicionamos o passo para saber qual o proximo elemento
        //  (att%n + passo)%n modulo n pois é ciclico
        }
    }

    cout << "\n";

    return 0;
}
