#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
    if (b == 0) return a;
    else return mdc(b, a % b);
}

int main(){
    long long n, a, b, c, d;
    cin >> n;
    while(n--){
        cin >> a >> b >> c >> d;
        cout << mdc(abs(a-c), abs(b-d))+1 << "\n" ;
    }
    
    return 0;
}