#include <bits/stdc++.h>

using namespace std;

int main(){
    string linha;
    while (1){
        getline(cin,linha);
        if(linha == "DONE") break;

        stringstream ss(linha);

        string frase = "", rev = "";
        char aux;
        while(ss >> aux){
            if(aux == '.'|| aux == ','|| aux == '!'|| aux == '?') continue;
            frase += tolower(aux);
            rev += tolower(aux);
        }

        reverse(rev.begin(), rev.end());

        if(frase != rev) cout << "Uh oh.." << "\n";
        else cout << "You won't be eaten!" << "\n";
    }
    
    return 0;
}
