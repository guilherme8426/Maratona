#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, sz, ans, m; 

    cin >> n;

    while (n--){
        cin >> sz;
        vector<pair<int,int>> v(sz);

        for(int i=0; i<sz; i++){
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
            return a.first < b.first;
        });
        
        ans = 0;
        m = v[0].second;
        for(int i=1; i<sz; i++){
            if(v[i].second >= m){ m = v[i].second; continue;}
            ans++;
        }
        cout << ans << "\n";
    }
    

    return 0;
}