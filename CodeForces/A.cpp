#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, numero;
    cin >> n;

    while(cin >> numero){
        vector<int> ans;
        int mult = 1;
        string numero_s = to_string(numero);

        for(int i=numero_s.size()-1; i>=0; i--){
            if(numero_s[i]!='0') ans.push_back((numero_s[i]-'0')*mult);
            mult*=10;
        }

        cout << ans.size() << "\n";
        for(auto a: ans) cout << a << " ";
        cout << "\n";
    }
    

    return 0;
}