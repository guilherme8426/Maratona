#include <bits/stdc++.h>

using namespace std;

int r, c, n;
vector<vector<char>> tab(100+2, vector<char> (100+2, '*'));
vector<vector<char>> bkp;

int x[] = {+1, 0, -1, 0};
int y[] = {0, +1, 0, -1};
 
void atualiza(int i, int j){
    char att, adj;
    att = bkp[i][j];
    for(int a=0; a<4; a++){
        adj = bkp[i+x[a]][j+y[a]];
        if(adj=='*' || adj==att)continue;
        if(adj=='S' && att=='R'){
            tab[i+x[a]][j+y[a]] = bkp[i][j];
        }
        if(adj=='P' && att=='S'){
            tab[i+x[a]][j+y[a]] = bkp[i][j];
        }
        if(adj=='R' && att=='P'){
            tab[i+x[a]][j+y[a]] = bkp[i][j];
        }
    }
}

int main(){
    int t, p=0;
    cin >> t;

    while (t--){
        cin >> r >> c >> n;

        if(p){
            cout << "\n";
        }else p=1;

        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                cin >> tab[i][j];
            }
        }

        while(n--){
            bkp = tab;
            for(int i=1; i<=r; i++){
                for(int j=1; j<=c; j++){
                    atualiza(i,j);
                }
            }
        }

        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                cout << tab[i][j];
            }
            cout << "\n";
        }
    }
    

    return 0;
}