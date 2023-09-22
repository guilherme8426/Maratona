#include <bits/stdc++.h>

using namespace std;

int main(){

    int caso = 0;
    string a;

    while (cin >> a && a != "end"){
        caso++;
        cout << "Case " << caso << ": ";
        int ans = 1;
        char att = a[0];
        vector<stack<char>> pilhas;
        pilhas.push_back(stack<char> ());
        pilhas[0].push(a[0]);
        for(auto letra: a){
            int foi = 0;
            for(auto &pilha: pilhas){
                if(pilha.top() >= letra){
                    pilha.push(letra);
                    foi = 1;
                    break;
                }
            }
            if(!foi){
                pilhas.push_back(stack<char> ());
                pilhas[(pilhas.size())-1].push(letra);
            }
        }
        // int sz = pilhas.size();
        cout << pilhas.size() << "\n";
    }
    

    return 0;
}