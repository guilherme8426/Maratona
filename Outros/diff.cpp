#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m, meio,si;

    cin >> n;
    while (n--){
        cin >> m;

        vector<int> num(m);
        for (int i = 0; i < m; i++){
            cin >> num[i];
        }
        sort(num.begin(), num.end());

        if (m%2==0) meio = ceil(m/2) -1;
        else meio = m/2;
        si = -1;
        for (int i = 0; i < m; i++){
            if(i) cout << " ";
            meio = meio + (i*si);
            cout << num[meio];
            si *= -1;
        }
        cout << "\n";
    }
    

    return 0;
}