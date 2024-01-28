#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, duracao, deadline, time=0, recompensa=0;
    cin >> n;

    vector<pair<long long,long long>>tarefas;
    while(cin >> duracao >> deadline)    tarefas.push_back({duracao, deadline});
    sort(tarefas.begin(), tarefas.end());

    for(auto tarefa: tarefas){
        time += tarefa.first;
        recompensa += (tarefa.second - time);
    }
    
    cout << recompensa << "\n";

    return 0;
}