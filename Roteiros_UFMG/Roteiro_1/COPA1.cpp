#include <bits/stdc++.h>

using namespace std;

int main() {
    char partidas[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
    int n1, n2;

    for(int c=0; c<8; c++){
        cin >> n1 >> n2;
        if(n1>n2) partidas[c] = partidas[2*c];
        else partidas[c] = partidas[(2*c)+1];
    }

    for(int c=0; c<4; c++){
        cin >> n1 >> n2;
        if(n1>n2) partidas[c] = partidas[2*c];
        else partidas[c] = partidas[(2*c)+1];
    }

    for(int c=0; c<2; c++){
        cin >> n1 >> n2;
        if(n1>n2) partidas[c] = partidas[2*c];
        else partidas[c] = partidas[(2*c)+1];
    }

    cin >> n1 >> n2;
    if(n1<n2) partidas[0] = partidas[1];

    cout << partidas[0] << '\n';

    return 0; 
}