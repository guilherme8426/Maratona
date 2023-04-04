#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> d(31, 0);
    vector <int> e(31, 0);
    int n, aux, s=0;
    char p;

    cin >> n;
    for(int i=0; i< n; i++){
        cin >> aux >> p;
        aux-=30;
        
        if(p == 'D') d[aux]++;
        else e[aux]++;

        if((d[aux]>0)&&(e[aux]>0)){
            s++;
            d[aux]--;
            e[aux]--;
        }

    }

    cout << s << '\n';

    return 0;
}