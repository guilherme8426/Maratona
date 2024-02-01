#include <bits/stdc++.h>

using namespace std;

int ans=0;
vector<vector<char>> matriz(8, vector<char> (8, '.'));

int valid(int i_a, int j_a){
    int i, j;

    if(matriz[i_a][j_a] == '*') return 0;

    for(int a=0; a<8; a++)
        if(matriz[a][j_a]=='1' || matriz[i_a][a]=='1') return 0;

    i=i_a; j=j_a;    
    while(i < 8 && j < 8 ){
        if(matriz[i][j]=='1') return 0;
        i++; j++;
    }
    i=i_a; j=j_a;
    while(i < 8 && j >= 0 ){
        if(matriz[i][j]=='1') return 0;
        i++; j--;
    }
    i=i_a; j=j_a;
    while(i >= 0 && j >= 0){
        if(matriz[i][j]=='1') return 0;
        i--; j--;
    }
    i=i_a; j=j_a;
    while(i >= 0 && j < 8){
        if(matriz[i][j]=='1') return 0;
        i--; j++;
    }

    return 1;
}

void solve(int j){

    if(j==8){
        ans++;
        return;
    }

    for(int i=0; i<8; i++){
        if(!valid(i, j)) continue;;

        matriz[i][j] = '1';
        solve(j+1);
        matriz[i][j] = '.';
    }

}

int main(){

    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            cin >> matriz[i][j];

    solve(0);

    cout << ans << "\n";

    return 0;
}