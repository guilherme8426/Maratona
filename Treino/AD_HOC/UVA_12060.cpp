#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int caso = 1;

    while (1) {
        int n, a;
        cin >> n;

        if (n == 0) break;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            sum += a;
        }

        cout << "Case " << caso << ":" << "\n";
        caso++;

        int absSum = abs(sum);
        int avg = absSum / n;
        int remainder = absSum % n;

        int gcdValue = gcd(remainder, n);
        remainder /= gcdValue;
        n /= gcdValue;

        if(absSum == 0){
            cout << "0" << "\n";
        }else if(remainder == 0) {
            if (sum < 0) cout << "- ";
            cout << avg << "\n";
        }else{
            int lenmax = 0, lenmax2;

            lenmax += to_string(n).size();
            if(sum < 0) lenmax += 2;
            if(avg > 0) lenmax += to_string(avg).size();

            lenmax2 = lenmax;

            printf("%*d\n", lenmax, remainder);
            if(sum < 0){ printf("- "); lenmax2-=2;}
            if(avg > 0){ printf("%d", avg); lenmax2-=to_string(avg).size();}
            printf("%s\n", string(lenmax2, '-').c_str());
            printf("%*d\n", lenmax, n);
        }
    }

    return 0;
}
