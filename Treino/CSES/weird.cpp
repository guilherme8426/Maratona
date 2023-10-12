#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long n;

    cin >> n;

    cout << n;
    while(n!=1){
        if(n!=1) cout << " ";
        if(n%2!=0) n = 3*n+1;
        else n = n/2;
        cout << n;
    }
    cout << "\n";

    return 0;
}