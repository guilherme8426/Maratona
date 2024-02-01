//https://www.beecrowd.com.br/judge/pt/problems/view/2653
#include <bits/stdc++.h>

using namespace std;

int main() {
    set<string> joias;
    string i;

    while(cin >> i){
        joias.insert(i);
    }

    cout << joias.size() << "\n";

    return 0;
}