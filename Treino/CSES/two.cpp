#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long n;
    cin >> n;
    for(unsigned long long i=1; i<=n; i++){
        cout << (((i*i*i*i)-((i*i)-1))/2) - 4*((i-1)*(i-2)) << "\n";
    }
    
    return 0;
}

