#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ans, max_e=0, att=1;
    cin >> n;
    vector<pair<int, int>> hora(n, make_pair(0,0));
    multiset<int> nolocal;

    for(int i=0; i<n; i++) cin >> hora[i].first >> hora[i].second;
    
    sort(hora.begin(), hora.end());


    nolocal.insert(0);
    for(auto pessoa: hora){
        auto ids = nolocal.upper_bound(pessoa.first);

        if(ids!=nolocal.begin()){
            while(1){
                att--;
                ids = nolocal.upper_bound(pessoa.first);
                if(--ids==nolocal.begin()){
                    nolocal.erase(ids);      
                    break; 
                }
                nolocal.erase(ids);
            }
        }
        nolocal.insert(pessoa.second);
        att++;
        max_e = max(max_e, att);
        
    }
    
    cout << max_e << "\n";

    return 0;
}