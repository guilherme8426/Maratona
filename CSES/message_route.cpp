#include <bits/stdc++.h>

#define MAXN (int)(1e5+3)

using namespace std;

// bool grafo[MAXN][MAXN];
vector<vector<int>> grafo(MAXN);
vector<bool> visitado(MAXN, true);
int dist[MAXN], anterior[MAXN];

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);


    int n, m, a, b, inicio, fim;
    scanf("%d %d", &n, &m);
    int ans[n+2];

    while(m--){
        scanf("%d %d", &a, &b);
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    inicio = 1;
    fim = n;

    // BFS
    visitado[inicio] = false;
    queue<int> f;
    f.push(inicio);

    dist[inicio] = 1; 
    dist[fim] = 0;
    while(!f.empty()){
        int att = f.front();
        f.pop();

        int foi = 0;
        for(auto a: grafo[att]){
            if(visitado[a]){
                f.push(a);
                visitado[a] = false;
                dist[a] = dist[att]+1;
                anterior[a] = att;

                if(a==fim){
                    foi = 1;
                    break;
                }
            }
        }
        if(foi) break;
    }
    
    if(!dist[fim]){
        printf("IMPOSSIBLE\n");
        return 0;
    }

    printf("%d\n", dist[fim]);

    int att = fim;
    for(int i=dist[fim]-1; i>=0; i--){
        ans[i] = att;
        att = anterior[att];
    }
    for(int i=0; i<dist[fim]; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}