#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, teste = 1;
    long long fat[1000002] = {};
    cout << "[";
    fat[0] = 1;
    for(int i=1; i<1000001; i++){
        fat[i] = (fat[i-1]*i)%100000;
        while(fat[i]%10 == 0){
            fat[i] = fat[i]/10;
        }
        cout << fat[i]%10 << ", ";
    }
    cout << "]";

    return 0;
    while(cin >> a){
        cout << "Instancia " << teste << "\n" << fat[a]%10 << "\n\n";
    }

    return 0;
}