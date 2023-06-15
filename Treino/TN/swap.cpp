//https://codeforces.com/problemset/problem/1828/B
//Resumo:    Dado um vetor desordenado e podendo trocar posições pi pj de lugar (se i-j == k) 
//           encontre o maior k para ordenar o vetor
//Resolução: calcula |pi - i| pra todo mundo e tira o mdc
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
    int ncase, narr, att, acc, sz; 
    
    cin >> ncase;

    while(ncase--){
        cin >> narr;

        vector<int> arr;
        vector<int> dist;
        for(int c=0; c<narr; c++){
            cin >> att;
            arr.push_back(att);
        }            

        for(int c=0; c<narr; c++){
            if((arr[c]-(c+1))!=0){
                dist.push_back(abs(arr[c]-(c+1)));
            }
        }
        sz = dist.size();

        acc= dist[0];
        for(int c=1; c<sz; c++){
            acc = gcd(acc, dist[c]);
        }

        cout << acc << "\n";
    }
}