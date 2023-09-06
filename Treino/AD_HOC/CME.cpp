#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m; 
    cin >> n;

    while (n--){
        cin >> m;
        if(m == 2) cout << 2 << '\n';
        else if(m%2 == 0) cout << 0 << '\n';
        else cout << 1 << '\n';
    }
    
    return 0;
}