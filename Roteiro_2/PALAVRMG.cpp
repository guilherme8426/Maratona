#include <bits/stdc++.h>

using namespace std;

bool ordenada(string a){
    int len = a.size();


    for(int c=1; c<len; c++){
        if(tolower(a[c]) <= tolower(a[c-1])) return false;
    }

    return true;
}

int main(){
    int n;
    string a;
    char r;

    cin >> n;

    for(int c=0; c<n; c++){
        cin >> a;
        if(ordenada(a)) r = 'O';
        else r = 'N';

        cout << a << ": " << r << '\n';
    }

    return 0;
}