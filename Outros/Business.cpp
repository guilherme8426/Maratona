//https://codeforces.com/contest/149/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int mes[12], n, s=0;

    cin >> n; 

    for(int i=0;i<12;i++) cin >> mes[i];

    sort(mes, mes+(sizeof(mes)/sizeof(mes[0])), greater<int>());

    if(n){
        for(int i=0; i<12; i++){
            n-=mes[i];
            s++;
            if(n<=0){
                break;
            }
        }

        (n>0) ? cout << -1  << '\n' : cout << s << '\n';
    }
    else cout << "0\n";

    return 0;
}