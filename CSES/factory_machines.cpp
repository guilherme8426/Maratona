#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll calcula_produtos(vector<ll> maquinas, ll time){
	ll pecas = 0;

	for(auto maquina: maquinas){
		pecas += min(time/maquina, (ll)1e9);
	}
	return pecas;
}

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	ll n, x, pecas_em_time;
	cin >> n >> x;
	
	vector<ll> maquinas(n);
	for(int i=0; i<n; i++)	cin >> maquinas[i];	
	sort(maquinas.begin(), maquinas.end());

	ll ans = -1;
	ll low = -1, high = (ll)(1e18);
	while (low <= high) {
		ll mid = low + (high - low + 1) / 2;
		ll midVal = calcula_produtos(maquinas, mid);
		// cout << midVal << "\n";
		if (midVal < x) { 
			low = mid + 1; 
		}
		else if (midVal > x) {
			high = mid - 1;
		}
		else if (midVal == x) {
			ans = mid;
			high = mid - 1;
		}
	}

	cout << low << "\n";

	return 0;
}
