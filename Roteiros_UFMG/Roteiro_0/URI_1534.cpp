    #include <bits/stdc++.h>

    using namespace std;

    int main() {
        int n, inicio, fim; 

        while(cin >> n){
            inicio = 0; fim = n-1;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j == fim) cout << "2";
                    else if(j == inicio) cout << "1";
                    else cout << "3";
                }
                cout << "\n";
                inicio++;
                fim--;
            }
        }

        return 0;
    }