#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    vector<int> a;

    cin >> n;

    for(int c=0; c<n; c++){

        cin >> m;
        
        a.push_back(m);
    }

    sort(a.begin(), a.end());
    if(a.size()%2==0) cout << (a[a.size()/2]+a[(a.size()/2)+1])/2 << '\n';
    else cout << a[a.size()/2] << '\n';

    return 0;
}