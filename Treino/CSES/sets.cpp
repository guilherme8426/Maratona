#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, som;
    vector<int> a, b;
    cin >> n;

    som = (n*(n+1))/2;

    if(som%2==1){ 
        cout << "NO\n";
        return 0;
    }

    som /= 2;
    for(int i=n; i>0; i--){
        if(som-i>=0){ 
            a.push_back(i);
            som -= i;
        }
        else{
            b.push_back(i);
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << "YES\n";
    cout << a.size() << "\n";
    for(auto elemento: a) cout << elemento << " ";
    cout << "\n";
    cout << b.size() << "\n";
    for(auto elemento: b) cout << elemento << " ";
    cout << "\n";

    return 0;
}