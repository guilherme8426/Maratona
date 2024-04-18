#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAXN (int)1e6+1

int divisores[MAXN+1];

int mdc(int a, int b) { return b == 0 ? a : mdc(b, a % b); }
int mmc(int a, int b) { return a * (b / mdc(a, b)); }

void obterDivisores(int n){
    for(int i=1; i*i <= n; i++){
        if(n%i==0){
            divisores[i]++;
            if(i != n/i) divisores[n/i]++;
        }
    }
}

int main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int n, x, max_v=0;
    cin >> n;
    
    while(cin >> x){
        max_v = max(max_v, x);
        obterDivisores(x);
    }

    for(int i=max_v; i>=1; i--){
        if(divisores[i]>=2){ 
            cout << i << "\n";
            break;
        }
    }

    return 0;
}

// Não passa no tempo
// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long

// int mdc(int a, int b) { return b == 0 ? a : mdc(b, a % b); }
// int mmc(int a, int b) { return a * (b / mdc(a, b)); }

// int main(){

//     int n, x, max_d=0;
//     vector<int> elementos;
//     cin >> n;

//     for(int i=0; i<n; i++){
//         cin >> x;
//         if(i)
//             for(auto e: elementos)
//                 max_d = max(max_d, mdc(x, e));            
        
//         elementos.push_back(x);
//     }

//     cout << max_d << "\n";
    
//     return 0;
// }