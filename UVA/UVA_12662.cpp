#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, idx=0, poslen=0;
    cin >> n;
    vector<string> alunos(n);
    vector<int> pos;
    string aux;

    for(int i=0;i<n;i++){
        cin >> aux;
        alunos[i] = aux;
        if(aux!="?"){ 
            pos.push_back(i);
            poslen++;
        }
    }
    
    for(int i=0;i<n;i++){
        if(i==pos[idx]){
            if(idx+1 <= poslen) idx++;
            continue;
        }

        if(!idx && pos[idx] > i){
            alunos[i] = "";
            for(int j = 0; j<pos[idx]-i; j++) alunos[i] += "left of ";
            alunos[i] += alunos[pos[idx]];
            continue;
        }

        if(idx == poslen){
            alunos[i] = "";
            for(int j = 0; j<i-pos[idx-1]; j++) alunos[i] += "right of ";
            alunos[i] += alunos[pos[idx-1]];
            continue;
        } 

        if(i == ((pos[idx]+pos[idx-1])/2) && (pos[idx]+pos[idx-1])%2==0){
            alunos[i] = "middle of "; alunos[i] += alunos[pos[idx-1]]; alunos[i] += " and "; alunos[i] += alunos[pos[idx]];
            continue;
        }

        if(pos[idx] - i > i - pos[(idx-1)]){
            alunos[i] = "";
            for(int j = 0; j<i - pos[(idx-1)]; j++) alunos[i] += "right of ";
            alunos[i] += alunos[pos[idx - 1]];
            continue;
        }

        alunos[i] = "";
        for(int j = 0; j<pos[idx] - i; j++) alunos[i] += "left of ";
        alunos[i] += alunos[pos[idx]];
    }

    cin >> k;
    while(k--){
        int a;
        cin >> a;
        cout << alunos[a-1] << "\n";
    }
    

    return 0;
}