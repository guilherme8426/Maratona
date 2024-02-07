#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n, k;
    cin >> t;

    while(cin >> n >> k){
        
        int r = (k/n), s = k%n, t=n*r;

        while((r+s)>=n){
            int som = r+s;
            r=(som/n);
            s=(som%n);
            t+=n*r;
        }
        t+=r+s;
        cout << t << "\n";
    }
    

    return 0;
}