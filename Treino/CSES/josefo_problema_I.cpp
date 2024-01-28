#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, frente, att=0, passo=2;
    cin >> n;
    queue<int> numeros;

    for(int i=0; i<n; i++) numeros.push(i+1);

    while(!numeros.empty()){
        frente = numeros.front();
        numeros.pop();
        if(!att){
            numeros.push(frente);
        }else{
            cout << frente << " ";
        }
        att=(att+1)%passo;
    }
    
    cout << "\n";

    return 0;
}
