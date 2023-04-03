#include <bits/stdc++.h>

using namespace std;

bool verifica(string p, string t){
    int lp = p.size();
    int lt = t.size();

    for(int i=0; i<lt-lp+1; i++){
        for(int j=0; j<lp; j++){
            if(p[j] != t[i+j]) break;
            if(j == lp-1) return true;
        }
    }

    return false;
}

int main(){
    int n;
    string p, t;

    cin >> n;

    for(int c=0; c<n; c++){
        cin >> p >> t;

        t.append(t);
        if(verifica(p,t)) cout << "S\n";
        else{ 
            reverse(p.begin(),p.end());
            if(verifica(p, t)) cout << "S\n";
            else cout << "N\n";
        }

    }


    return 0;
}