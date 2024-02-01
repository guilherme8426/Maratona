//https://codeforces.com/problemset/problem/1828/B
//Resumo:    Dado um vetor ache o maior x para que [a1 modx, a2 modx, ..., ai-1 modx, an modx]
//           seja um palindromo
//Resolução: a1 modx = an mod x ==> a1-an = 0 modx ==> a1-an = x, como queremos o maior é so fazer o mdc 
//           para os pares do vetor
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

int lcm(int a,int b){
    return (a*b)/gcd(a, b);
}

int main() {_
    int ncase, narr, att, acc, l, r; 
    
    cin >> ncase;

    while(ncase--){
        cin >> narr;

        vector<int> arr;
        for(int c=0; c<narr; c++){
            cin >> att;
            arr.push_back(att);
        }            

        l=0;
        r=narr-1;
        acc = 0;
        while (l<=r){
            acc = gcd(acc, abs(arr[l] - arr[r]));
            l++;
            r--;
        }

        cout << acc << "\n";
    }
}