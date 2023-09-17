#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a, ans;
    cin >> n;

    unordered_map<int, int> bast;
    while(n--){
        cin >> a;
        bast[a]++;
    }

    ans = 0;
    for(auto par: bast){
        ans += par.second/2;
    }

    cout << ans/2 << "\n";    

    return 0;
}