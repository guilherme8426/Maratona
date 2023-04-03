#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b, s;
    char op;
    string answ;

    cin >> t >> a >> op >> b;

    if(op == '*') s=a*b;
    if(op == '+') s=a+b;

    answ = t >= s ? "OK" : "OVERFLOW";
    cout << answ << '\n';

    return 0;
}