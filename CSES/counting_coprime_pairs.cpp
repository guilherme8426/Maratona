#include<bits/stdc++.h>

using namespace std;

#define ll long long

const ll mxN = 1e6+6;

ll sieve_size; // Limite de geração 
bitset<10000010> bs; // Cada bit mostra se um número é primo ou não
vector<ll> primes; // Lista de primos

ll mdc(ll a, ll b) { return b == 0 ? a : mdc(b, a % b); }
ll mmc(ll a, ll b) { return a * (b / mdc(a, b));}

void sieve(ll upperbound) {
    // O(n loglog n) ~= O(n)
    sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= sieve_size; i++)
        if (bs[i]) {
            for (ll j = i * i; j <= sieve_size; j += i) bs[j] = 0;
            primes.push_back((ll)i);   
        }
}

vector<ll> setPrimeFactors(ll N){
    vector<ll> factors;
    ll PF_idx = 0;
    ll PF = primes[PF_idx];
    while (PF * PF <= N) {
        int s=0;
        while (N % PF == 0) {
            N /= PF;
            if(s) continue;
            factors.push_back(PF);
            s=1;
        }
        PF = primes[++PF_idx];
    }
    if (N != 1) factors.push_back(N);
    return factors;
}


ll cnt[mxN];

int main(){
    sieve(1000000);
    ll n, a, ans=0;

    cin >> n;

    while(cin >> a){
        vector<ll> v = setPrimeFactors(a);

        ll nf = v.size();
        for(ll mask=1; mask<(1<<nf); mask++){
            ll p=1, bit=0;

            for(ll i=0; i<nf; i++){
                if(mask&(1<<i)){
                    bit++;
                    p*=v[i];
                }
            }

            ll f=1;
            if(bit%2==0) f=-1;

            ans += f*cnt[p];
            cnt[p]++;
        }
    }

    cout << n*(n-1)/2 - ans << "\n";

    return 0;
}