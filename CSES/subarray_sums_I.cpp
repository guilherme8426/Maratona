#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Function to find number of subarrays with sum exactly
// equal to k.
ll findSubarraySum(vector<ll> arr, ll n, ll sum){
	// STL map to store number of subarrays starting from
	// index zero having particular value of sum.
	unordered_map<ll, ll> prevSum;

	ll res = 0;

	// Sum of elements so far.
	ll currSum = 0;

	for (ll i = 0; i < n; i++) {

		// Add current element to sum so far.
		currSum += arr[i];

		// If currsum is equal to desired sum, then a new
		// subarray is found. So increase count of
		// subarrays.
		if (currSum == sum)
			res++;

		// currsum exceeds given sum by currsum - sum. Find
		// number of subarrays having this sum and exclude
		// those subarrays from currsum by increasing count
		// by same amount.
		if (prevSum.find(currSum - sum) != prevSum.end())
			res += (prevSum[currSum - sum]);

		// Add currsum value to count of different values of
		// sum.
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