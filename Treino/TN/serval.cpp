//https://codeforces.com/problemset/problem/1789/A
//Resumo:    Dado um vetor verifique se da pra reorganizar de modo que o mdc dos prefixos 
//           não seja maior q seu comprimento
//Resolução: se mdc(a0, a1)<=2 o mdc(a0, a1, ..., an) <2
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

int main() {_
    int ncase, narr, att, acc, ans; 
    
    cin >> ncase;

    while(ncase--){
        ans = 0;
        cin >> narr;

        vector<int> arr;
        for(int c=0; c<narr; c++){
            cin >> att;
            arr.push_back(att);
        }            

        for(int c=0; c<narr; c++){
            for(int d=0; d<narr; d++){
                if(c!=d && (gcd(arr[c],arr[d])<=2)){
                    ans = 1;
                    break;
                }
            }
            if(ans) break;
        }
            
        if(ans)
            cout << "Yes" << "\n";  
        else
            cout << "No" << "\n";
    }
}