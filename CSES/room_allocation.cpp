#include <bits/stdc++.h>

using namespace std;    
    
int main(){
    int n, entrada, saida, quarto, idx, quartos_usados=0;
    cin>>n;
    multimap<pair<int,int>,int>clientes;

    for(int i=0;i<n;++i){
    	cin>>entrada>>saida;
    	clientes.insert({{entrada,saida},i});
	}
	vector<int>ans(n);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>quartos_att;

    for(auto cliente: clientes){
        entrada=cliente.first.first, saida=cliente.first.second, idx=cliente.second ,quarto=0;
        
        if(quartos_att.empty() || quartos_att.top().first >= entrada){
            quartos_usados++;
            quarto = quartos_usados;
        }
        else{
            quarto = quartos_att.top().second;
            quartos_att.pop();
        }
        quartos_att.push(make_pair(saida, quarto));
        ans[idx] = quarto;
    }

    cout << quartos_usados << "\n";
    for(auto an: ans) cout << an << " ";
    cout << "\n";
}