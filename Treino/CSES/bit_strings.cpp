#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

int main(){

    long long n, resp=1;
    cin >> n;

    for(int i=0; i<n; i++){
        resp = (resp*2)%mod;
    }

    cout << resp << "\n";

    return 0;
}