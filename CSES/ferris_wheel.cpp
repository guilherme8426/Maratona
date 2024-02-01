#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, ans=0;
    cin >> n >> x;
    vector<long long> crianca(n);

    for(int i=0; i<n; i++){
        cin >> crianca[i];
    }

    sort(crianca.begin(), crianca.end());

    int i=0, f=n-1;
    while(i<=f){
        if(crianca[i] + crianca[f] <= x){
            i++;
            f--;
        }
        else{
            f--;
        }
        ans++;
    }
    
    cout << ans << "\n";

    return 0;
}