#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, caso =0;

    cin >> n;

    while(n--){
        caso++;
        vector<pair<char, char>> baralho(52, make_pair('A', 'c'));
        for(int i=51; i>-1; i--){
            cin >> baralho[i].first >> baralho[i].second;
        }

        int y=0, desc = 0, idx_car, car;
        for(int i=0; i<3; i++){
            idx_car = 25+desc;
            car = (baralho[idx_car].first >= 'A') ? 10 : baralho[idx_car].first - '0';
            y += car;
            desc += 1+(10-car);
        }
        int ans;
        ans = ((52 - y) > 25+desc)? 52 - y : 25 - (y - (27 - desc));
        cout << "Case " << caso << ": " << baralho[ans].first << baralho[ans].second << "\n";
    }

    return 0;
}