    #include <bits/stdc++.h>

    using namespace std;

    int main() {
        int Q, D, P;
        float X;

        while(1){
            cin >> Q;
            if(Q==0) break;
            cin >> D >> P;
            X = (int)abs((Q*D*P)/(P-Q));
            cout << X;
            X > 1 ? cout << " paginas\n" : cout << " pagina\n";
        }

        return 0;
    }