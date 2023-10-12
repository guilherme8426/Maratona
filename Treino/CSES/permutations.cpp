#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, j=1;
    cin >> n;

    if(n == 2 || n == 3){ 
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    if(n==4){ 
        cout << "2 4 1 3\n";
        return 0;
    }

    for(int i=0; i<n; i++){
        if(i) cout << " ";

        cout << j;
        j += 2;

        if(j>n) j = 2;
    }
    
    cout << "\n";
    return 0;
}