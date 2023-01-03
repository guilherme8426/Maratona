#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s = 1;

    cin >> n;

    for(int c=2; c<n; c++){
        if(n%c==0) s=0;
    }

    if((s == 1)&&(n > 1)) cout << "sim" << '\n'; 
    else cout << "nao" << '\n';

    return 0; 
}