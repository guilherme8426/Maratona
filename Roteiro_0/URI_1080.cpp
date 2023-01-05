#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ma, p;

    for(int c=0; c<100; c++){
        cin >> n;
        if(n>ma){ ma = n; p = c+1;} 

    }

    cout << ma << '\n' << p << '\n';

    return 0;
}