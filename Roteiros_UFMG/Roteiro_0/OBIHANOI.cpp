#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,s,counter=1;

    while(1){
        cin >> n;
        if(n==0) break;
        if(counter != 1) cout << '\n';

        cout << "Teste " << counter << '\n';

        s=1;
        for(int c=0; c<n; c++){
            s*=2;
        }
        cout << s-1 << "\n";

        counter++;

    }

    return 0; 
}