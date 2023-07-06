#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, teste = 0;
     
    while(1){
        cin >> n;
        if(n == 0) break;

        teste++; cout << "Teste " << teste << endl;

        for(int i=1; i<n+1; i++){
            cin >> m;
            if(m==i) cout << i << endl << endl;
        }

    }

    return 0;
}