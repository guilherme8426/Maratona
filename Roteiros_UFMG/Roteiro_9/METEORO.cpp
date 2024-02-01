#include <bits/stdc++.h>

using namespace std;

double dist(pair<int, int> p1, pair<int, int> p2){
    return hypot((p1.first-p2.first), (p1.second-p2.second));
}

int main() {
    int x1, x2, y1, y2, k, x, y, cont, teste=1;

    while(1){
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1==0 && x2==0 && y1==0 && y1==0) break;
        cin >> k;

        cout << "Teste " << teste << "\n";
        cont = 0;
        while (k--){
            cin >> x >> y;

            if(x1<=x && x<=x2 && y2<=y && y<=y1) cont++;
        }
        
        cout << cont << "\n\n";
        teste++;
    }

    return 0;
}