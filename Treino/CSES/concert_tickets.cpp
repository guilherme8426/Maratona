#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    int n, m, att;
    cin >> n >> m;  
    multiset<int> ticket;

    for(int i=0; i<n; i++){
        cin >> att;
        ticket.insert(att);
    }

    for(int i=0; i<m; i++){
        cin >> att;
        auto it = ticket.upper_bound(att); //primeiro elemento maior que o seu

        if(it == ticket.begin()) cout << "-1\n";
        else{
            cout << *(--it) << "\n";
            ticket.erase(it);
        }
        
    }
    

    return 0;
}