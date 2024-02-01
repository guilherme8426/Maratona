#include <bits/stdc++.h>

using namespace std;

double dist(pair<int, int> p1, pair<int, int> p2){
    return hypot((p1.first-p2.first), (p1.second-p2.second));
}

float colinear(pair<double, double> p1, pair<double, double> p2, pair<double, double> p3){
    return ((p1.first * (p2.second - p3.second)) + (p2.first * (p3.second - p1.second)) + (p3.first * (p1.second - p2.second)));
}

const double eps = 1e-8;

int main() {
    int t, n, max, aux, teste=0;
    double a, b;

    cin >> t;

    while(t--){
        set<pair<double, double>> pontos;

        teste++;
        cout << "Data set #" << teste << " ";

        cin >> n;

        while(n--){
            cin >> a >> b;
            pontos.insert(make_pair(a,b));
        }

        if(pontos.size() == 1){
            cout << "contains a single gnu.\n";
            continue;
        }

        max = 2;
        for(auto p1: pontos){
            for(auto p2: pontos){
                if(p1 == p2) continue;

                aux=2;
                //printf("(%f, %f) - (%f, %f): \n", p1.first, p1.second, p2.first, p2.second);
                for(auto p3: pontos){
                    if(p3 == p1 || p3 == p2) continue;
                    if(fabs(colinear(p1, p2, p3)) <= eps) aux++;
                    //printf("\t(%f, %f): %f %d\n", p3.first, p3.second, colinear(p1, p2, p3), aux);
                }

                if(aux>max) max = aux;
                //cout << "\t" << max << "\n";
            }
        }
        cout << "contains "<< pontos.size() <<" gnus, out of which a maximum of "<< max <<" are aligned.\n";
    }

    return 0;
}