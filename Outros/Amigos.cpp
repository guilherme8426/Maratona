//https://neps.academy/br/exercise/466
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, el, idx, ans=0, max=0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> el;
        arr[i] = el;

        if(arr[i]+arr[0]+i > max){
            max = arr[i] + arr[0] +i;
            idx = i;
        }
    }

    for(int i=0; i<n; i++){
        if(i==idx) continue;

        if(max+arr[i] -(arr[0]+min(i,idx)) > ans){
            ans = max+arr[i] -(arr[0]+min(i,idx));
        }
    }

    cout << ans << "\n";

    return 0;
}