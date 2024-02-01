#include <bits/stdc++.h>

using namespace std;

int main(){

    int max_glob=0, max_loc=0;
    char caracter, att=0;

    while(cin >> caracter){
        if(caracter != att){
            max_glob = max(max_loc, max_glob);
            max_loc = 0;
            att = caracter;
        }
        max_loc++;
    }

    cout << max(max_loc, max_glob) << "\n";
    return 0;
}