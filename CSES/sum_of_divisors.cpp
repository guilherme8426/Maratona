#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007
#define TWO_MOD_INV 500000004

ll total_sum(ll i, ll f){
    // soma de p.a. o TWO_MOD_INV é pelo dividir por 2
    return ((((f-i+1)%MOD) * ((i + f) % MOD) % MOD) * TWO_MOD_INV % MOD);
}

ll sumOfAllDiv(ll n){
    ll att=1, ans=0;

    while(att <= n){
        // att é o divisor
        ll q = n/att; //q é quantas vezes essedivisor aparece
        
        ll att_n = (n/q); // aqui a gente vai para o proximo divisor que aparece uma
                           //  quantidade de vezes diferente de att

        ans = (ans+q*total_sum(att, att_n))%MOD;

        att = att_n + 1;
    }

    return ans;
}

int main(){

    ll n;
    cin >> n;

    cout << sumOfAllDiv(n) << "\n";
    
    return 0;
}


// ################### time limite ########################

// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define MOD 1000000007


// ll sieve_size; // Limite de geração 
// bitset<10000010> bs; // Cada bit mostra se um número é primo ou não
// vector<int> primes; // Lista de primos


// void sieve(ll upperbound) {
//     // O(n loglog n) ~= O(n)
//     sieve_size = upperbound + 1;
//     bs.set();
//     bs[0] = bs[1] = 0;
//     for (ll i = 2; i <= sieve_size; i++)
//         if (bs[i]) {
//             for (ll j = i * i; j <= sieve_size; j += i) bs[j] = 0;
//             primes.push_back((int)i);   
//         }
// }

// ll numDiv(ll N) {
//     ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
//     while (PF * PF <= N) {
//         ll power = 0;
//         while (N % PF == 0) { N /= PF; power++; }
//         ans *= (power + 1);
//         PF = primes[++PF_idx];
//     }
//     if (N != 1) ans *= 2;
//     return ans;
// }

// ll sumDiv(ll N){
//     ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
//     while (PF * PF <= N) {
//         ll power = 0;
//         while (N % PF == 0) { N /= PF; power++; }
//         ans *= ((ll)pow((double)PF, power + 1.0) - 1) / (PF - 1);
//         PF = primes[++PF_idx];
//     }
//     if (N != 1) ans *= ((ll)pow((double)N, 2.0) - 1) / (N - 1);
//     return ans;
// }

// ll sumOfAllDiv(ll N){
//     ll ans=0;
//     for(int i=1; i<=N; i++){
//         ans = (ans+sumDiv(i))%MOD;
//     }
//     return ans;
// }

// int main(){
//     sieve(1000000);

//     int n;
//     cin >> n;

//     cout << sumOfAllDiv(n) << "\n";
    
//     return 0;
// }
