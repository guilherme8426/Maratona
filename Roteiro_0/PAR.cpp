#include <bits/stdc++.h>

using namespace std;

int main() {
    string A, B, answ;
    int n, m1, m2, na, nb, counter=1;

    while(1){
        cin >> n;
        if(n==0) break;
        if(counter != 1) cout << '\n';

        cin >> A >> B;

        cout << "Teste " << counter << '\n';

        na = 0;
        nb = 0;
        for(int c=0; c<n; c++){
            cin >> m1 >> m2;
            if((m1+m2)%2 == 0){na=1;nb=0;}
            else{na=0;nb=1;};

            answ = na > nb ? A : B;
            cout << answ << "\n";
        }

        counter++;

    }

    return 0; 
}