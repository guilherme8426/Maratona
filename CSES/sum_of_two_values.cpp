#include <bits/stdc++.h>

using namespace std;

bool comparePairs(const pair<int, int>& lhs, const pair<int, int>& rhs) {
    return lhs.first < rhs.first;
}

int main(){

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> numeros(n, make_pair(0,0));

    for(int i=0; i<n; i++){
      cin >> numeros[i].first;
      numeros[i].second = i;
    }

    sort(numeros.begin(), numeros.end());

    for(auto numero: numeros){
        auto ids = lower_bound(numeros.begin(), numeros.end(), make_pair(x - numero.first, 0), comparePairs);
        
        if(ids->first == x-numero.first && ids->second != numero.second){
            cout << ids->second + 1 << " " << numero.second + 1 << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}