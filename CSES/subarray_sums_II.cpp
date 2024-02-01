#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll findSubarraySum(vector<ll> arr, ll n, ll sum){

	unordered_map<ll, ll> prevSum;

	ll res = 0;

	ll currSum = 0;

	for (ll i = 0; i < n; i++) {

		currSum += arr[i];

		if (currSum == sum)
			res++;

		if (prevSum.find(currSum - sum) != prevSum.end())
			res += (prevSum[currSum - sum]);

		prevSum[currSum]++;
	}

	return res;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    ll n, sum;
    cin >> n >> sum;
    vector<ll> arr(n);

    for(ll i=0; i<n; i++) cin >> arr[i];

	cout << findSubarraySum(arr, n, sum) << "\n";

	return 0;
}