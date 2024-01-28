#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int x, n, att, idx, ans;
    cin >> x >> n;
    ans = x;

    set<int> semaforo{0,x};
    multiset<int> dist{x};

    while(cin >> att){
        auto it1 = semaforo.upper_bound(att);
		auto it2 = it1;
		--it2;

		dist.erase(dist.find(*it1 - *it2));
		dist.insert(att - *it2);
		dist.insert(*it1 - att);
		semaforo.insert(att);

		auto ans = dist.end();
		--ans;
		cout << *ans << " ";
    }
    cout << "\n";

    return 0;
}
