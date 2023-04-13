//https://codeforces.com/problemset/problem/1343/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t, n, a, max, ans;
    cin >> t;

    for(int i=0; i<t; i++){
        ans = 0;
        cin >> n >> max;
        for(int j=1; j<n; j++){
            cin >> a;

            if(max*a < 0){
                ans += max;
                max = a;
            }
            else if(a > max){
                max = a;
            }
        }

        cout << ans+max << '\n';
    }

    return 0;
}