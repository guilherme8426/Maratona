#include <bits/stdc++.h>

using namespace std;

#define ll long long


ll sieve_size; // Limite de geração 
bitset<10000010> bs; // Cada bit mostra se um número é primo ou não
vector<int> primes; // Lista de primos


void sieve(ll upperbound) {
    // O(n loglog n) ~= O(n)
    sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= sieve_size; i++)
        if (bs[i]) {
            for (ll j = i * i; j <= sieve_size; j += i) bs[j] = 0;
            primes.push_back((int)i);   
        }
}

ll numDiv(ll N) {
    ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
    while (PF * PF <= N) {
        ll power = 0;
        while (N % PF == 0) { N /= PF; power++; }
        ans *= (power + 1);
        PF = primes[++PF_idx];
    }
    if (N != 1) ans *= 2;
    return ans;
}

int main(){
    sieve(1000000);

    int n, x;
    cin >> n;

    while(cin >> x){
        cout << numDiv(x) << "\n";
    }
    
    return 0;
}