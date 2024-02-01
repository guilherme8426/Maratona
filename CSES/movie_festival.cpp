#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ans=0, att=0;
    cin >> n;
    vector<pair<int, int>> filmes(n, make_pair(0, 0));

    for(int i=0; i<n; i++) cin >> filmes[i].first >> filmes[i].second;
    
    sort(filmes.begin(), filmes.end());

    for(auto filme: filmes){
        if(filme.first >= att){
            att = filme.second;
            ans++;
        }
        att = min(att, filme.second);
    }

    cout << ans << "\n";

    return 0;
}