#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a, idx;
    bool sw;

    cin >> n;

    vector<int> v(n);
    vector<pair<int, int>> ans;
    for(int i=0; i<n; i++)cin >> v[i];
    
    for(int i = 0; i < n; i++){
        a = v[i];
        sw = false; 
        for(int j=i+1; j<n; j++){
            if(a > v[j]){
                a = v[j];
                idx = j;
                sw = true;
            }
        }

        if(sw){
            swap(v[i], v[idx]);
            ans.push_back(make_pair(i, idx));
        }
    }

    cout << ans.size() << "\n";

    for(int i=0; i< ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << "\n";
    }
    

    return 0;
}