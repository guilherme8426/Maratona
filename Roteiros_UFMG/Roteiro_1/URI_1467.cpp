#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C;
    char r;

    while (true){
        
        cin >> A >> B >> C;

        if(!cin) break;

        if((A==B) && (B==C)) r = '*';
        if((A!=B) && (B==C)) r = 'A';
        if((A!=B) && (B!=C)) r = 'B';
        if((A==B) && (B!=C)) r = 'C';

        cout << r << '\n';

    }

    return 0;
}