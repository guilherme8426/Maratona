#include <bits/stdc++.h>

using namespace std;

int main(){

    string palavra;
    vector<string> ans;
    cin >> palavra;

    sort(palavra.begin(), palavra.end());

    do {
        ans.push_back(palavra);
    } while(next_permutation(palavra.begin(), palavra.end()));

    cout << ans.size() << "\n";
    for(auto p: ans) cout << p << "\n";

    return 0;
}