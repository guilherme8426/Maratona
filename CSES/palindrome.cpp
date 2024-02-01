#include <bits/stdc++.h>

using namespace std;

int main(){
    int conterpar = 0, sz=0, l, r;
    char caracter;
    vector<pair<int,char>> palavra;

    for(int i='A'; i<='Z'; i++) palavra.push_back(make_pair(0,char(i)));

    while(cin >> caracter){
        palavra[caracter-'A'].first+=1;
        sz++;
    }

    vector<char> palindromo(sz);

    sort(palavra.rbegin(), palavra.rend());

    l=0, r=sz-1;
    for(auto par: palavra){
        if(par.first == 0) break;
        if(par.first%2==1){
            if(conterpar < 2){
                conterpar++;
                if(sz%2==0){
                    cout << "NO SOLUTION\n";
                    return 0;
                }
                palindromo[ceil(sz/2)] = par.second;
                par.first--;
            }
            else{
                cout << "NO SOLUTION\n";
                return 0;
            }
        }

        for(int i=0; i<par.first; i+=2){
            palindromo[l] = par.second;
            palindromo[r] = par.second;
            l++; 
            r--;
        }
    }

    for(auto caracter: palindromo){
        cout << caracter;
    }
    cout << "\n";
    return 0;
}