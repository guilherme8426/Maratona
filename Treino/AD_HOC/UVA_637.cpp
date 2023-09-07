#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, min, max, mod, div;

    while (cin >> n){
        if(n==0) break;
        
        cout << "Printing order for " << n << " pages:\n";

        min = 1; max = n; div = n/4; mod = n%4;
        int  pag = 1;

        switch(mod){
        case 1:
            cout << "Sheet 1, front: Blank, 1" << "\n";
            if(n<5) break; 
            cout << "Sheet 1, back : 2, Blank" << "\n";
            cout << "Sheet 2, front: Blank, 3" << "\n";
            cout << "Sheet 2, back : 4, " << max << "\n";
            min+=4;
            max--;
            pag+=2;
            div--;
            break;

        case 2:
            cout << "Sheet 1, front: Blank, 1" << "\n";
            cout << "Sheet 1, back : 2, Blank" << "\n";
            min+=2;
            pag++;
            break;

        case 3:
            cout << "Sheet 1, front: Blank, 1" << "\n";
            cout << "Sheet 1, back : 2, " << max << "\n";
            min+=2;
            max--;
            pag++;
            break;
        }

        for(int i=0; i<div; i++){
            cout << "Sheet " << pag << ", front: " << max << ", " << min << "\n";
            min++; max--;
            cout << "Sheet " << pag << ", back : " << min << ", " << max << "\n";
            min++;
            max--;
            pag++;
        }

    }
    

    return 0;
}