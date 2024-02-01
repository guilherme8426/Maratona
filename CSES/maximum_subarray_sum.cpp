#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, numero;
    long long max_end_here=0, max_so_far=INT_MIN;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> numero;
        max_end_here += numero;
        if(max_so_far<max_end_here)    max_so_far = max_end_here;
        if(max_end_here<0) max_end_here = 0;
    }

    cout << max_so_far << "\n";

    return 0;
}
