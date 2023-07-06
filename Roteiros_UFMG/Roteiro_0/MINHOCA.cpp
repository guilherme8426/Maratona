#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m, a;
    cin >> n >> m;
    int matriz[n][m];
    vector<int> som(n+m, 0);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a;
            matriz[i][j] = a;
            som[i] += a;
        }
    }
            
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            som[n+i] += matriz[j][i];
        
    cout << *max_element(som.begin(), som.end()) << endl;

    return 0; 
}