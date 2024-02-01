#include <bits/stdc++.h>

using namespace std;

int main(){

    long long p, d, m, a, mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while ((cin >> p >> d >> m >> a ) && a!=0){
        int diaMesAtt;
        while (p>0){
            diaMesAtt = mes[m-1];
            if(m==2 && (a%4==0 && ((a%100!=0)|| (a%400==0)))) diaMesAtt++;

            if(p<= diaMesAtt-d){ 
                d+=p;
                break;
            }

            if(d == diaMesAtt) p--;
            else p = p-(diaMesAtt-d)-1 ;
            d = 1;
            m = ((m)%12)+1;
            if(m==1) a++;
        }
        cout << d << " " << m  << " " << a << "\n";
    }
    return 0;
}