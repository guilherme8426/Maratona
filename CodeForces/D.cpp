#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n, ans_a, ans_b, att_a, att_b, l, r, jogada;
    cin >> t;

    while(cin >> n){

        vector<int> num(n);
        for(int i=0; i<n; i++) cin >> num[i];
    
        ans_a=0; ans_b=0; att_a=0; att_b=0; l=0; r=num.size()-1, jogada=0;

        while(l<=r){
            jogada++;

            if(jogada%2==1){ 
                att_a = 0;
                while(att_a<=att_b && l<=r){
                    att_a += num[l]; 
                    l++;
                }
                ans_a+=att_a;
            }
            else{
                att_b = 0;
                while(att_b<=att_a && l<=r){
                    att_b += num[r]; 
                    r--;
                }
                ans_b+=att_b;
            }
        }    

        cout << jogada << " " << ans_a << " " << ans_b << "\n";
    }
    
    return 0;
}