#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	ll n, sum=0, max_livro=0;
	cin >> n;
	
	vector<ll> livros(n);
	for(int i=0; i<n; i++){
        ll aux;
        cin >> aux;	
        sum += aux;
        max_livro = max(max_livro, aux);
    }

    if(sum-max_livro < max_livro) cout << 2*max_livro << "\n";
    else cout << sum << "\n";

	return 0;
}
