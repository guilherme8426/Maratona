#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, x, y, n;

    cin >> n;

    while (n--){
        cin >> a >> b >> x >> y;
        x+=1;
        y+=1;

        cout << max(max((x-1)*b,(a-x)*b), max(a*(y-1),a*(b-y))) << "\n";
    }
    

    return 0;
}