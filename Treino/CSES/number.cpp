#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long n, a, b;
    cin >> n;

    while(cin >> a >> b){
        if(a>b){
            if(a%2!=0){
                //min
                //som
                cout << ((a*a) - ((2*a)-2)) + (b-1);
            }
            else{
                //sub
                cout << a*a - (b-1);
            }
        }
        else{
            if(b%2==0){
                //min
                //som
                cout << ((b*b) - ((2*b)-2)) + (a-1);
            }
            else{
                //sub
                cout << b*b - (a-1);
            }
        }
        cout << "\n";
    }
    
    return 0;
}