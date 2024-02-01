#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, p, a,test = 0;

    while (cin >> n && n){
        if(test) cout << "\n";
        test++;
        cout << "Teste " << test << "\n";
        p=0;
        while (n--){
            p++;
            cin>>a;
            if(a==p) cout << p << "\n";
        }
        
    }
    

    return 0;
}