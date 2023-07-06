#include <bits/stdc++.h>

using namespace std;

string numberToBase36(long long number) {
    string base36Digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result;

    if (number == 0) {
        return "0";
    }

    while (number > 0) {
        long long remainder = number % 36;
        result += base36Digits[remainder];
        number /= 36;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string n, m;

    while(1){
    
        cin >> n >> m;
        if(n=="0" && m=="0") break;

        long long ni = stoi(n, nullptr, 36);
        long long mi = stoi(m, nullptr, 36);

        cout << numberToBase36(ni+mi) << endl;
    }

    return 0;
}