#include <bits/stdc++.h>

using namespace std;

char mais[] = {'1','2','3','4','5','6','7','8','9','0'};
char menos[] = {'9','0','1','2','3','4','5','6','7','8'};

int main(){

    int n, m, k, a, b, caso = 0;
    string transformacao;
    cin >> n;

    while(n--){
        caso++;
        cout << "Case #" << caso << "\n";

        cin >> m;
        vector<string> mat(m);

        for(int i=0; i<m; i++)                
            cin >> mat[i];

        cin >> k;

        while(k--){
            cin >> transformacao;
            if(transformacao == "row"){
                cin >> a >> b;
                swap(mat[a-1], mat[b-1]);
                continue;
            }
            if(transformacao == "col"){
                cin >> a >> b;
                for(int i=0; i<m;i++)
                    swap(mat[i][a-1], mat[i][b-1]);
                continue;
            }
            if(transformacao == "transpose"){
                for(int i=0; i<m;i++)
                    for(int j=i+1; j<m; j++)
                        swap(mat[i][j], mat[j][i]);
                continue;
            }

            for(int i=0; i<m;i++)
                for(int j=0; j<m; j++){
                    if(transformacao == "inc")
                        mat[i][j] = mais[mat[i][j]-'0'];
                    else
                        mat[i][j] = menos[mat[i][j]-'0'];
                }
        }

        for(int i=0; i<m; i++){
            cout << mat[i] << "\n";
        }
        cout << "\n";
    }
    
    return 0;
}