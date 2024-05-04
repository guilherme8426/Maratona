#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n, c, ans=0;
    cin >> n;
    
    while(cin >> c){if(c==n) ans++;}
    
    cout << ans << "\n";
    
    return 0;
}