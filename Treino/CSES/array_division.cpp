#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool calcula_divisoes(vector<ll> numeros, ll max_sum, ll max_div){
	ll divisoes = 1, sum=0;

	for(auto numero: numeros){
		// cout << numero << " Soma antes: " << sum;

		if(numero > max_sum) return false;

		if(sum + numero <= max_sum) sum += numero;
		else{
			divisoes++;
			sum = numero;
		}
		// cout << " Soma depois: " << sum << " Divisoes: " << divisoes << "\n";
	}
	// cout << "\n";
	return max_div>=divisoes;
}

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	ll n, x;
	cin >> n >> x;
	
	vector<ll> numeros(n);
	for(int i=0; i<n; i++)	cin >> numeros[i];	
	// sort(numeros.rbegin(), numeros.rend());

	// cout << calcula_divisoes(numeros, 7, x) << "\n";
	ll l = -1, r = (ll)1e18;
	while (r - l > 1) {
		ll m = (l + r) / 2;
		// cout << l << " " << r << " " << m << "\n";
		if(calcula_divisoes(numeros, m, x)){
			r = m; // a[l] <= k < a[m] <= a[r]
		}else{
			l = m; // a[l] <= a[m] <= k < a[r]
		}
	}

	cout << r << "\n";

	return 0;
}
