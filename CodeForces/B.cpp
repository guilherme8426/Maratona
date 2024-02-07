#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a, b;
    cin >> n;

    while(cin >> a >> b){
        if(b>a){cout << "NO\n"; continue;}

        int num = a;
        if(a%2==0){
            if(2*b<=a){
                cout << "YES\n";
                b--;
                while(b--){
                    cout << "2 ";
                    num-=2;
                }
                cout  << num << "\n";
                continue;
            }
            
            if(b%2!=0){
                cout << "NO\n";
                continue;
            }
            
            cout << "YES\n";
            b--;
            while(b--){
                cout << "1 ";
                num-=1;
            }
            cout  << num << "\n";
            continue; 
        }

        if(b%2==0){
        cout << "NO\n";
        continue;
        }
        
        cout << "YES\n";
        b--;
        while(b--){
            cout << "1 ";
            num-=1;
        }
        cout  << num << "\n";
        
    }

    return 0;
}