#include <bits/stdc++.h>

using namespace std;

int main(){

    int s = 0;
    string a;
    cin >> a;

    stack<char> p;
    p.push('&');

    for(char letra: a){
        if(p.top() == '&'){
            p.push(letra);
            continue;
        }

        if(p.top() == letra){
            s++;
            p.pop();
            continue;
        }

        p.push(letra);
    }
    
    cout << ((s%2!=0)? "Yes" : "No") << "\n";

    return 0;
}