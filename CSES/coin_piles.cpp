#include <bits/stdc++.h>

using namespace std;

int main(){

    long long t, a, b;
    cin >> t;

    while(t--){
        cin >> a >> b;

        if(((a+b)%3==0) && (min(a, b) * 2 >= max(a, b))) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}