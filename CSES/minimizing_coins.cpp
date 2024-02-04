// A Dynamic Programming based C++ program to find minimum
// of coins to make a given change V
#include <bits/stdc++.h>

#define ll int

using namespace std;
 
// m is size of coins array (number of different coins)
int minCoins(vector<ll> coins, int m, int V)
{
    // table[i] will be storing the minimum number of coins
    // required for i value.  So table[V] will have result
    int table[V + 1];
 
    // Base case (If given value V is 0)
    table[0] = 0;
 
    // Initialize all table values as Infinite
    for (int i = 1; i <= V; i++)
        table[i] = INT_MAX;
 
    // Compute minimum coins required for all
    // values from 1 to V
    for (int i = 1; i <= V; i++) {
        // Go through all coins smaller than i
        for (int j = 0; j < m; j++)
            if (coins[j] <= i) {
                int sub_res = table[i - coins[j]];
                if (sub_res != INT_MAX
                    && sub_res + 1 < table[i])
                    table[i] = sub_res + 1;
            }
    }
 
    if (table[V] == INT_MAX)
        return -1;
 
    return table[V];
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    vector<ll> coins(n);

    for(ll i=0; i<n; i++) cin >> coins[i];

	ll res = minCoins(coins, coins.size(), x);
	// if (res == INT_MAX)
	// 	res = -1;

	cout << res << "\n";

	return 0;
}
