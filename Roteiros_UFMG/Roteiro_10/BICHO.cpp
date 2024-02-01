#include <bits/stdc++.h>

using namespace std;

int main(){
    int minimo, ig, a, b;
    double n;

    map<int, int> bicho;
    
    for(int i=0; i<25; i++){
        bicho[(i*4)+1] = i;
        bicho[(i*4)+2] = i;
        bicho[(i*4)+3] = i;
        bicho[(i*4)+4] = i;

        //cout << bicho[(i*4)+1] << " " << bicho[(i*4)+2] << " " << bicho[(i*4)+3] << " " << bicho[(i*4)+4] << "\n";
    }
    bicho[0] = bicho[99];
    //cout << bicho[0];

    //cout << 12345 << " " << 12345%10000 << " " << 12345%1000 << " " << 12345%10 << "\n";
    //return 0;
    while(1){
        cin >> n >> a >> b;
        //cout << n <<" " << a <<" " << b <<"\n";

        if(n==0 && a==0 && b==0) break;

        if(a%10000==b%10000){
            printf("%.2f\n", n*3000);
            continue;
        }
        if(a%1000==b%1000){
            printf("%.2f\n", n*500);
            continue;
        }
        if(a%100==b%100){
            printf("%.2f\n", n*50);
            continue;
        }
        if(bicho[a%100]==bicho[b%100]){
            printf("%.2f\n", n*16);
            continue;
        }
        printf("0.00\n");
    }

    return 0;
}