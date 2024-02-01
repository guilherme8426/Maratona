#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> numeros(n), ans(n,0);
    stack<pair<int, int>> att;

    for(int i=0; i<n; i++){
        cin >> numeros[i];
    }

    for(int i=n-1; i>=0; i--){
        while(!att.empty() && numeros[i] < att.top().first){            
            ans[att.top().second] = i+1;
            att.pop();
        }
            
        att.push({numeros[i], i});
    }

    for(auto an: ans) cout << an << " ";
    cout << "\n";

    return 0;
}