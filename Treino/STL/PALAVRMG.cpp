//https://br.spoj.com/status/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sz;
    char ant, ans;
    string a;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;

        sz = a.size();
        ant = a[0];
        ans = 'O';

        for(int j=1; j<sz; j++){
            if((int)tolower(a[j])<=(int)tolower(ant)){
                ans = 'N';
                break;
            }
            if(j!=sz-1) ant = a[j];
        }

        cout << a << ": " << ans<<"\n";
    
    }

    return 0;
}