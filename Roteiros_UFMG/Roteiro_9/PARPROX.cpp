#include <bits/stdc++.h>

using namespace std;

double dist(pair<int, int> p1, pair<int, int> p2){
    return hypot((p1.first-p2.first), (p1.second-p2.second));
}

int main() {
    int m, a, b;
    double min, aux;
    vector<pair<int, int>> pontos;

    cin >> m;
    if(m < 2){
        cout << -1 << endl;
        return 0;
    }

    while(cin >> a >> b)
        pontos.push_back(make_pair(a, b));

    min = dist(pontos[0], pontos[1]);
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i==j) continue;

            aux = dist(pontos[i], pontos[j]);

            if(min>aux)
                min = aux;
        }
    }

    cout << fixed << setprecision(3) << min << endl;

    return 0;
}