#include <bits/stdc++.h>

using namespace std;

int main(){

    int  N, R, C, K;

    while (cin >> N >> R >> C >> K && N){
        vector<vector<int>> greed(R+2, vector<int>(C+2, -1));

        for (int i = 1; i <= R; i++){
            for (int j = 1; j <= C; j++){
                cin >> greed[i][j];
            }
        }

        while (K--){
            vector<vector<int>> bkp(greed);

            for (int i = 1; i <= R; i++){
                for (int j = 1; j <= C; j++){
                    int inimigo = (bkp[i][j] +1)%N;

                    if(bkp[i][j+1] == inimigo) greed[i][j+1] = bkp[i][j];
                    if(bkp[i][j-1] == inimigo) greed[i][j-1] = bkp[i][j];
                    if(bkp[i+1][j] == inimigo) greed[i+1][j] = bkp[i][j];
                    if(bkp[i-1][j] == inimigo) greed[i-1][j] = bkp[i][j];
                }
            }
        }
        
        for (int i = 0; i < R; i++){
            for (int j = 0; j < C; j++){
                if(j) cout << " ";
                cout << greed[i+1][j+1];
            }
            cout << "\n";
        }
    }

    return 0;
}