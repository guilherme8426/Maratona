#include <bits/stdc++.h>

// #define c2i(x, y) (x-1)*m+(y-1)
// #define i2c(idx) {(idx/m)+1, (idx%m)+1}

using namespace std;

bool grid[1001][1001];
char v, direcao[1000][1000], ans[1000000];
queue<pair<int, int>> f;
int n, m, inicio_x, inicio_y, fim_x, fim_y, dist[1001][1001];
int des[4][2] = {{0,1},{0,-1},{-1,0},{1,0}};
char dir[] = {'R', 'L', 'U', 'D'};  

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);

    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char v; 
            scanf(" %c", &v);

            if(v=='#'){
                grid[i][j] = false;
                continue;
            }
            
            grid[i][j] = true;

            if(v=='A'){
                inicio_x = i; 
                inicio_y = j;
            }
            if(v=='B'){
                fim_x = i;
                fim_y = j;
            } 
        }
    }

    // BFS

    f.push({inicio_x, inicio_y});

    bool foi = false;
    while(!f.empty()){
        pair<int, int> att = f.front();
        f.pop();

        grid[att.first][att.second] = false;

        for(int i=0; i<4; i++){
            if(att.first+des[i][0]>-1 && att.first+des[i][0]<n && att.second+des[i][1]>-1 && att.second+des[i][1]<m && grid[att.first+des[i][0]][att.second+des[i][1]]){
                f.push({att.first+des[i][0], att.second+des[i][1]});
                dist[att.first+des[i][0]][att.second+des[i][1]] = dist[att.first][att.second] + 1;
                direcao[att.first+des[i][0]][att.second+des[i][1]] = dir[i];
                grid[att.first+des[i][0]][att.second+des[i][1]] = false;

                if(!grid[fim_x][fim_y]) foi = true;
            }
        }

        if(foi) break;
    }




    if(grid[fim_x][fim_y]){
        printf("NO\n");
        return 0;
    }

    printf("YES\n%d\n", dist[fim_x][fim_y]);
    
    int x_att=fim_x, y_att=fim_y;
    for(int i=dist[fim_x][fim_y]-1; i>=0; i--){
        // printf("%d %d %d %c\n", i, x_att, y_att, direcao[x_att][y_att]);
        int x_prox = x_att, y_prox = y_att;
        ans[i] = direcao[x_att][y_att];
        if(ans[i] == 'U') x_prox++;
        if(ans[i] == 'D') x_prox--;
        if(ans[i] == 'L') y_prox++;
        if(ans[i] == 'R') y_prox--;
        x_att = x_prox;
        y_att = y_prox;
    }

    for(int i=0; i<dist[fim_x][fim_y]; i++){
        printf("%c", ans[i]);
    }          
    printf("\n");

    return 0;
}

// Forma 2 que tbm passa mas é mais verbosa

// #include <bits/stdc++.h>
 
// #define c2i(x, y) (x-1)*m+(y-1)
// #define i2c(idx) {(idx/m)+1, (idx%m)+1}
 
// using namespace std;
 
// vector<vector<bool>> grid(1002, vector<bool>(1002, false));
// vector<pair<int, int>> anterior(1000002, {-1, -2});
// int n, m, inicio, fim;
 
// bool bfs(){
//     queue<int> f;
//     f.push(inicio);
//     anterior[inicio] = {0, -1};
 
//     while(!f.empty()){
//         int att = f.front();
//         pair<int, int> att_c = i2c(att);
//         f.pop();
 
//         grid[att_c.first][att_c.second] = false;
 
//         for(int i=-1; i<2; i++)
//             for(int j=-1; j<2; j++)
//                 if(abs(i-j)==1 && grid[att_c.first+i][att_c.second+j]){
//                     f.push(c2i(att_c.first+i, att_c.second+j));
//                     anterior[c2i(att_c.first+i, att_c.second+j)] = {anterior[att].first+1, att};
//                     if(c2i(att_c.first+i, att_c.second+j) == fim) return true;
//                     grid[att_c.first+i][att_c.second+j] = false;
//                 }
 
//     }
    
//     return false;
// }
 
// vector<char> caminho(){
//     vector<char> ans(anterior[fim].first);
//     int ant = fim;
//     pair<int, int> ant_c = i2c(ant);
 
//     for(int i=anterior[fim].first-1; i>=0 ; i--){
//         int att = anterior[ant].second;
//         pair<int, int> att_c = i2c(att);
        
//         if(ant_c.first > att_c.first && ant_c.second == att_c.second){
//             ans[i] = 'D';
//         }
//         if(ant_c.first < att_c.first && ant_c.second == att_c.second){
//             ans[i] = 'U';
//         }
//         if(ant_c.second > att_c.second && ant_c.first == att_c.first){
//             ans[i] = 'R';
//         }
//         if(ant_c.second < att_c.second && ant_c.first == att_c.first){
//             ans[i] = 'L';
//         }
 
//         ant = att;
//         ant_c = att_c;
//     }
    
//     return ans;
// }
 
// int main(){
//     ios::sync_with_stdio(false); 
//     cin.tie(0);
//     cout.tie(0);
 
//     // cin >> n >> m;
//     scanf("%d %d", &n, &m);
 
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=m; j++){
//             char v; 
//             scanf(" %c", &v);
//             // cin >> v;
//             if(v=='#') continue;
            
//             grid[i][j] = true;
 
//             if(v=='A') inicio = c2i(i, j);
//             if(v=='B') fim = c2i(i, j);
//         }
//     }
 
//     if(!bfs()) printf("NO\n");
//     else{
//         printf("YES\n%d\n", anterior[fim].first);
//         auto ans = caminho();
//         for(auto i: ans)
//             printf("%c", i);            
//         printf("\n");
//     }
 
//     return 0;
// }