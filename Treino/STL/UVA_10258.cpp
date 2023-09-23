#include <bits/stdc++.h>

using namespace std;

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    // Ordenar pelo número de forma decrescente
    if (a[10] != b[10]) {
        return a[10] > b[10];
    }
    
    // Ordenar pelo tempo de forma crescente
    if (a[11] != b[11]) {
        return a[11] < b[11];
    }

    // Ordenar pelo time de forma crescente
    return a[12] < b[12];
}

int main(){

    int n, participante, problema, tempo;
    cin >> n;
    char status;
    string line;
    cin.ignore();
    cin.ignore();
    while(true){

        vector<vector<int>> ans(101, vector<int> (13, 0));
        vector<vector<int>> prob(101, vector<int> (10, 0));
        
        while(getline(cin, line) && line.empty()== 0){
            stringstream buffer;
            buffer << line;
            buffer >> participante >> problema >> tempo >> status;

            if(status == 'C' && !prob[participante][problema]){ 
                ans[participante][10]++;
                ans[participante][0] = 1;
                ans[participante][problema] = 20*ans[participante][problema] + tempo;
                prob[participante][problema] = 1;
                ans[participante][11] += ans[participante][problema];
                ans[participante][12] = participante;
            }
            if(status == 'I'){
                ans[participante][0] = 1;
                ans[participante][problema]++;
                ans[participante][12] = participante;
            }
            else{
                ans[participante][0] = 1;
                ans[participante][12] = participante;
            }
        }

        sort(ans.begin(), ans.end(), compare);

        for(auto p: ans){
            if(p[0]) cout << p[12] << " " << p[10] << " " << p[11] << "\n";
        }

        n--;
        if(n==0) break;        
        cout << "\n";
    }
    

    return 0;
}