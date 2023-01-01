#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s=1;

    cin >> n;

    for(int c=2; c<n+1; c++){
        s *= c;
    }

    cout << s << "\n";

    return 0; 
}