#include <bits/stdc++.h>

using namespace std;

long long findTrailingZeros(long long n)
{
    if (n < 0) 
        return -1;
 
    long long count = 0;
 
    for (long long i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}

int main(){

    long long n;
    cin >> n;
    cout << findTrailingZeros(n) << "\n";

    return 0;
}