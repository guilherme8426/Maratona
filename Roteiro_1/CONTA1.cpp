#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,s=7;

    cin >> n;

    if(n>100){
        s += (n-100)*5;
        n=100;
    }

    if(n>30){
        s += (n-30)*2;
        n=30;
    }

    if(n>10){
        s += (n-10)*1;
    }

    cout << s << '\n';

    return 0; 
}