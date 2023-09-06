#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,a,b;
    cin >> n;

    while (n--){
        cin >> a >> b;

        if(a==b) cout << 0 << "\n";
        //XNOR e XOR 
        if(a>b) cout << (a%2 ^ b%2)+1 << "\n";
        if(a<b) cout << (!(a%2 ^ b%2))+1 << "\n";

        //Bruto
        // if(a<b && a%2==1 && b%2==0) cout << 1 << "\n";
        // if(a<b && a%2==1 && b%2==1) cout << 2 << "\n";
        // if(a<b && a%2==0 && b%2==1) cout << 1 << "\n";
        // if(a<b && a%2==0 && b%2==0) cout << 2 << "\n";

        // if(a>b && a%2==1 && b%2==0) cout << 2 << "\n";
        // if(a>b && a%2==1 && b%2==1) cout << 1 << "\n";
        // if(a>b && a%2==0 && b%2==1) cout << 2 << "\n";
        // if(a>b && a%2==0 && b%2==0) cout << 1 << "\n";
    }
    

    return 0;
}