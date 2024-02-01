#include <bits/stdc++.h> 

using namespace std; 
  
int knapSack(int W, int wt[], int val[], int n) { 
    // Making and initializing dp array 
    int dp[W + 1]; 
    memset(dp, 0, sizeof(dp)); 
  
    for (int i = 1; i < n + 1; i++) { 
        for (int w = W; w >= 0; w--) { 
  
            if (wt[i - 1] <= w) 
                  
                // Finding the maximum value 
                dp[w] = max(dp[w], 
                            dp[w - wt[i - 1]] + val[i - 1]); 
        } 
    } 
    // Returning the maximum value of knapsack 
    return dp[W]; 
} 
  
// Driver code 
int main(){   
    int n, W;
    cin >> n >> W;

    int profit[n], weight[n];
    for(int i=0; i<n; i++) cin >> weight[i];
    for(int i=0; i<n; i++) cin >> profit[i];

    cout << knapSack(W, weight, profit, n) << "\n"; 
    return 0; 
}