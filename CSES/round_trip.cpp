#include <bits/stdc++.h>

using namespace std;

#define MAXN (int)(1e5+3)

vector<vector<int>> grafo(MAXN);
vector<bool> visitado(MAXN, true);


bool dfs(int p, int sz){
    // vector<bool> visitado(MAXN, true);
    vector<int> anterior(sz+2, 0);
    int foi=0;

    visitado[p] = false;
    anterior[p] = 0;

    stack<int> pilha;

    pilha.push(p);

    while(!pilha.empty()){
        int att = pilha.top();
        pilha.pop();
        visitado[att] = false;

        // cout << "att: " << att << "\n";
        for(auto proximo: grafo[att]){
            if(proximo == anterior[att]) continue;
            // cout << "   proximo: " << proximo << "\n";

            if(visitado[proximo]){
                pilha.push(proximo);
                // visitado[proximo] = false;
                anterior[proximo] = att;
            }
            else{
                anterior[proximo] = att;
                foi = proximo;
                // cout << proximo << " ACHOU\n ";
                break;
            }
        }

        if(foi) break;
    }
    
    // for(auto i: anterior){
    //     cout << i << " " ;
    // }
    // cout << "\n";
    if(foi){
        vector<int> ans;
        ans.push_back(foi);

        int att = anterior[foi];
        anterior[foi];
        while(att!=foi){
            ans.push_back(att);
            att = anterior[att];
        }
        
        int n = ans.size();
        cout << n+1 << "\n";
        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << foi << "\n";
        return true;
    }

    return false;
}



int main(){

    int n, m, a, b;
    cin >> n >> m;
    
    vector<int> nodes;

    while(cin >> a >> b){
        grafo[a].push_back(b);
        grafo[b].push_back(a);
        nodes.push_back(a);
        nodes.push_back(b);
    }
    
    for(auto i: nodes){
        if(!visitado[i]) continue;
        if(dfs(i, n)){
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";

    // dfs(1, n);

    return 0;
}