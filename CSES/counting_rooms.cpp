#include <bits/stdc++.h>

using namespace std;

vector<vector<bool>> grid(1002, vector<bool>(1002, false));

bool dfs(int x, int y){
    if(!grid[x][y]) return false;

    grid[x][y] = false;

    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
            if(abs(i-j)==1) dfs(x+i, y+j);

    return true;
}

int main(){

    int n, m, ans=0;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char v; 
            cin >> v;
            if(v=='.') grid[i][j] = true;
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(dfs(i, j)) ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}