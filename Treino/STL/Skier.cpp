//https://codeforces.com/contest/1351/problem/C
#include <bits/stdc++.h>

using namespace std;

int main(){

    long t; cin >> t;
    while(t--){
        string s; 
        cin >> s;

        set< pair<pair<long, long>, pair<long, long> > > vis;
        pair<long, long> cur(make_pair(0,0));
        long cnt(0);
        for(long p = 0; p < s.size(); p++){
            pair<long, long> next = cur;
            if(s[p] == 'S'){next.second--;}
            else if(s[p] == 'N'){next.second++;}
            else if(s[p] == 'W'){next.first--;}
            else if(s[p] == 'E'){next.first++;}
            cnt += 5 - 4 * vis.count(make_pair(cur, next));
            vis.insert(make_pair(cur, next));
            vis.insert(make_pair(next, cur));
            cur = next;
        }

        printf("%ld\n", cnt);
    }

    return 0;
}