#include <bits/stdc++.h>

using namespace std;

int longestSequence(vector<int> sequencia){
    if(sequencia.size() == 0) return 0;
    if(sequencia.size() == 1) return 1;

    int maxLength = 0;
    map<int,int> visited;

    int left = 0, right = 0;
    while(right < sequencia.size()){
        if(visited[sequencia[right]] == 1){

            while(visited[sequencia[right]] == 1){
                visited[sequencia[left]] = 0;
                left++;
            }            
        }

        visited[sequencia[right]] = 1;

        maxLength = max(maxLength, right-left+1);

        right++;
    }
    
    return maxLength;
}

int main(){

    int n;
    cin >> n;
    vector<int> numeros(n);    

    for(int i=0; i<n; i++){
        cin >> numeros[i];
    }

    cout << longestSequence(numeros) << "\n";

    return 0;
}