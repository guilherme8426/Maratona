#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, a;
    cin >> x >> y;

    vector<int> v(x+y, 0);

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            cin >> a;
            v[i] += a;
            v[x+j] += a;
        }
    }

    cout << *max_element(v.begin(), v.end()) << "\n";
    
    return 0;
}