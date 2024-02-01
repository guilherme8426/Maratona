#include <bits/stdc++.h>

using namespace std;

int compara_maior(int a1, int m1, int d1, int a2, int m2, int d2){
    if(a1>a2) return 1;
    if(a1!=a2) return 0;
    if(m1>m2) return 1;
    if(m1!=m2) return 0;
    if(d1>d2) return 1;
    if(d1!=d2) return 0;
    return 1;
}

int main(){

    int n, d_max=0, m_max=0, a_max=0, d_min=0, m_min=0, a_min=0, d, m, a;
    string name_max, name_min, name;
    
    cin >> n >> name_max >> d_max >> m_max >> a_max;
    name_min = name_max; d_min = d_max; m_min = m_max; a_min = a_max; n--;

    while(n--){
        cin >> name >> d >> m >> a;

        if(compara_maior(a, m, d, a_max, m_max, d_max) == 1){
            name_max = name;
            a_max = a;
            m_max = m;
            d_max = d;
        }

        if(compara_maior(a, m, d, a_min, m_min, d_min) == 0){
            name_min = name;
            a_min = a;
            m_min = m;
            d_min = d;
        }
    }

    cout << name_max << "\n" << name_min << "\n";

    return 0;
}