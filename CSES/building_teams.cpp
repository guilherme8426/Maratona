#include <bits/stdc++.h>

#define MAXN (int)(1e5+3)

using namespace std;

vector<vector<int>> grafo(MAXN);
vector<int> equipe(MAXN, 0);

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);


    int n, m, a, b;
    scanf("%d %d", &n, &m);
    int ans[n+2];

    while(m--){
        scanf("%d %d", &a, &b);
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        if(equipe[i]) continue;

        // BFS
        queue<int> f;
        f.push(i);

        equipe[i] = 1;
        while(!f.empty()){
            int att = f.front();
            f.pop();

            int cor = 1;
            if(equipe[att] == 1) cor++;

            for(auto a: grafo[att]){
                if(!equipe[a]){
                    f.push(a);
                    equipe[a] = cor;
                }

                if(equipe[a]!=cor){
                    printf("IMPOSSIBLE\n");
                    return 0;
                }
            }
        }
    }

    for(int i=1; i<=n; i++) printf("%d ", equipe[i]);
    printf("\n");

    return 0;
}