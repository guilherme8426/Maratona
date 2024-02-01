#include <bits/stdc++.h>

using namespace std;

long long n, som=0, min_dif=LONG_LONG_MAX;
vector<long long> numeros(20);

void calcula(int i, long long soma){

    if(i==n){
        min_dif = min(min_dif, abs(((som-soma)-soma)));
        return;
    }

    calcula(i+1, soma+numeros[i]);
    calcula(i+1, soma);
}

int main(){

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> numeros[i];
        som +=numeros[i];
    }

    calcula(0, 0);

    cout << min_dif << "\n";

}