#include <bits/stdc++.h>

using namespace std;

int main(){

    char ch;
    string ans;
    int n;
    cin >> n;

    while(cin.get(ch)){
        if(ch == ' '){
            if(!n)
                cout << ans << "\n";
            n=0;
            ans = "";
        }
        cout << ch;

    }
    cout << ans << "ainda não fiz" << "\n";

    return 0;
}