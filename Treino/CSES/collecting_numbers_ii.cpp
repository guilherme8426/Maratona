#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, a, b, aidx, bidx, ans=1, att;
    int ant[4], ago[4];
    cin >> n >> m;

    vector<int> numero(n), modelo(n);

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        numero[x-1] = i;
        modelo[i] = x-1;
    }

    att = 0;
    for(auto valor: numero){
        // cout << valor << " ";
        if(att > valor){
            ans++;
        }
        att = valor;
    }

    while(m--){

        // for(auto valor: modelo){
        //     cout << valor << " ";
        // }
        // cout << "\n";

        // for(auto valor: numero){
        //     cout << valor << " ";
        // }
        // cout << "\n";

        cin >> a >> b; a--; b--;
        // cout << "\na: " << a << " b: " << b << "\n\n";
        if(a==b){
            cout << ans << "\n";
            continue;
        }

        aidx=modelo[a]; 
        bidx=modelo[b];
        if(aidx>bidx) swap(aidx, bidx);
        for (int i = 0; i < 2; i++){

            // cout << "aidx: " << aidx << " bidx: " << bidx << "\n";
            ago[0] = 0; ago[1] = 0; ago[2] = 0; ago[3] = 0; 

            if(aidx>0){ 
                if(numero[aidx-1] > numero[aidx]   ) ago[0] = 1;
            }else{ago[0] = -3;}

            if(aidx<n-1){
                if(numero[aidx]   > numero[aidx+1] ) ago[1] = 1;
            }else{ago[1] = -3;}

            if(bidx>0){
                if(numero[bidx-1] > numero[bidx]   ) ago[2] = 1;
            }else{ago[2] = -3;}

            if(bidx<n-1){
                if(numero[bidx]   > numero[bidx+1] ) ago[3] = 1;
            }else{ago[3] = -3;}

            if(aidx-bidx == 1)    ago[4] = -3;
            if(bidx-aidx == 1)    ago[2] = -3;

            if(!i){
                swap(modelo[a], modelo[b]);
                swap(numero[aidx], numero[bidx]);
                ant[0] = ago[0]; ant[1] = ago[1]; ant[2] = ago[2]; ant[3] = ago[3];
            }

        }

        for(int i=0; i<4; i++){
            if(ant[i] - ago[i] ==  1) ans--;
            if(ant[i] - ago[i] == -1) ans++;
        }

        // cout << ant[0] << " " << ago[0] << "\n";
        // cout << ant[1] << " " << ago[1] << "\n";
        // cout << ant[2] << " " << ago[2] << "\n";
        // cout << ant[3] << " " << ago[3] << "\n\n";

        // for(auto valor: modelo){
        //     cout << valor << " ";
        // }
        // cout << "\n";
        // for(auto valor: numero){
        //     cout << valor << " ";
        // }
        // cout << "\n\nValor: ";
        cout << ans << "\n";
    }
    
    return 0;
}