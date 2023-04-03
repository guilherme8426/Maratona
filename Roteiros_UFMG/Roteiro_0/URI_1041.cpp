#include <bits/stdc++.h>

using namespace std;

int main(){
    float x, y;
    string r;

    cin >> x >> y;

    if((x*y>0)&&(x>0)) r = "Q1";
    if((x*y>0)&&(x<0)) r = "Q3";
    if((x*y<0)&&(x>0)) r = "Q4";
    if((x*y<0)&&(x<0)) r = "Q2";
    if(y==0) r = "Eixo X";
    if(x==0) r = "Eixo Y";
    if(y==0 && x==0) r = "Origem";

    cout << r << '\n';

    return 0;
}