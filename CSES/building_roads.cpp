#include <bits/stdc++.h>

#define MAXN (int)(1e5+3)

using namespace std;

// bool grafo[MAXN][MAXN];
vector<vector<int>> grafo(MAXN);
vector<bool> visitado(MAXN, true);
vector<int> grupos;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);


    int n, m, a, b, ans=0;
    scanf("%d %d", &n, &m);

    while(m--){
        scanf("%d %d", &a, &b);
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        if(!visitado[i]) continue;

        grupos.push_back(i);
        ans++;

        // BFS
        queue<int> f;
        f.push(i);

        visitado[i] = false;
        while(!f.empty()){
            int att = f.front();
            f.pop();

            for(auto a: grafo[att]){
                if(visitado[a]){
                    f.push(a);
                    visitado[a] = false;
                }
            }
        }
    }
    
    printf("%d\n", ans-1);
    for(int i=0; i<ans-1; i++){
        printf("%d %d\n", grupos[i], grupos[i+1]);
    }

    return 0;
}