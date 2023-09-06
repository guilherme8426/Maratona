#include <bits/stdc++.h>

using namespace std;


int main(){
    int a, b, tent=0;
    char c;
    int x[] = {0,1,1,1,0,-1,-1,-1};
    int y[] = {1,1,0,-1,-1,-1,0,1};

    while (1){
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        if(tent) cout << "\n";
        tent++;

        vector<vector<int>> mat(a+2, vector<int> (b+2, 0));

        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= b; j++){
                cin >> c;
                if(c=='.') continue;

                mat[i][j] = -1;

                int i_, j_;
                for(int k=0; k<8; k++){
                    i_ = i+x[k]; j_ = j+y[k];
                    if(mat[i_][j_] == -1) continue;

                    mat[i_][j_] += 1;
                }
            }
        }

        cout << "Field #"<< tent << ":\n";
        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= b; j++){
                if(mat[i][j] == -1) cout << "*";
                else cout << mat[i][j];
            }
            cout << "\n";
        }
        
    }
    


    return 0;
}