#include <bits/stdc++.h>

using namespace std;

vector<long long> av;
vector<long long> bv;

void special(long long x, int aorb){
    vector<long long> xv;
    long long num = 1;
    bool neg = x < 0;
	if (neg) x = -x;
    string s = to_string(x);

    for (int i = 0; i < s.length(); ++i) {
		int num = ((long long)(s[i] - '0')) * pow(10, s.length() - 1 - i);
		if (num)
			xv.push_back(num);
	}

    if (neg)
		for (int i = 0; i < xv.size(); ++i) {
			xv[i] = -xv[i];
		}
    if(aorb) av = xv;
    else bv = xv;
}

int main(){
    long long n, a, b, mult;
    cin >> n;

    while (n--){
        cin >> a >> b;
        special(a, 1);
        special(b, 0);

        for (int i = 0; i < av.size(); ++i) {
			for (int j = 0; j < bv.size(); ++j) {
                if (i || j) cout << "+ ";
                cout << av[i] << " x " << bv[j] << " \n"[i == av.size() - 1 && j == bv.size() - 1];
		    }
		}

        av.clear();
        bv.clear();
    }

    return 0;
}
