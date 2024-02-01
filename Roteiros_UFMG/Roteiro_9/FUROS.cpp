#include <bits/stdc++.h>

using namespace std;

double dist(pair<int, int> p1, pair<int, int> p2){
    return hypot((p1.first-p2.first), (p1.second-p2.second));
}

int main() {
    int n, teste=1, a, b;
    double min, max, aux;

    while(1){
        cin >> n;
        if(n==0) break;
        
        cout << "Teste " << teste << "\n";
        teste++;

        vector<pair<int, int>> pontos;
        for(int i=0; i<n; i++){
            cin >> a >> b;
            pontos.push_back(make_pair(a, b));
        }

        if(n==1){
            cout << "5\n\n";
            continue;
        }

        min = 90000;

        for(int i=0; i<n; i++){
            max = 0;
            for(int j=0; j<n; j++){
                if(i==j) continue;

                aux = dist(pontos[i], pontos[j]);
                if(max<aux) max = aux;
            }
            if(max<min){
                min = max;
            }

        }

        cout << ceil((min+2.5)*2) << "\n\n";
    }

    return 0;
}