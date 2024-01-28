#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, att, idx, max, ans=1; 
    cin >> n;
    vector<int> torres;

    cin >> att; 
    torres.push_back(att);
    max = att;

    while(cin >> att){
        if(att>=max){
            torres.push_back(att);
            ans++;
            max = att;
            continue;
        }
        
        auto it = upper_bound(torres.begin(), torres.end(), att);

        if(it != torres.end()){
            idx = distance(torres.begin(), it);
            torres[idx] = att;
        }
        else{
            torres.push_back(att);
            ans++;
        }
    }
    
    cout << ans << "\n";

    return 0;
}