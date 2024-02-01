#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    while (n--){
        int let[] = {1,1,1,1,1,1,1,1,1,1,1,1};
        int usado[] = {0,0,0,0,0,0,0,0,0,0,0,0};
        string left, right, pos, pes[] = {"*","*","*","*","*","*","*","*","*","*","*","*"};
        
        for(int i=0; i<3;i++){
            cin >> left >> right >> pos;

            if(pos == "even"){
                for(auto letra: left+right){
                    let[letra - 'A'] &= 0;
                    usado[letra - 'A'] = 1;
                }
                continue;
            }

            for(int j=0; j<12; j++){
                int ta = 0;
                for(auto letra: left+right) if(j == letra-'A'){ta=1; break;}
                if(ta) continue;
                let[j] = 0;
            }

            for(auto letra: left){
                let[letra - 'A'] &= 1;
                usado[letra - 'A'] = 1;

                if(pos == "up"){
                    if(pes[letra - 'A'] == "light") let[letra - 'A'] = 0;
                    pes[letra - 'A'] = "heavy";
                }
                else{ 
                    if(pes[letra - 'A'] == "heavy") let[letra - 'A'] = 0;
                    pes[letra - 'A'] = "light";
                }
            }
            for(auto letra: right){
                let[letra - 'A'] &= 1;
                usado[letra - 'A'] = 1;

                if(pos == "up"){
                    if(pes[letra - 'A'] == "heavy") let[letra - 'A'] = 0;
                    pes[letra - 'A'] = "light";
                }
                else{
                    if(pes[letra - 'A'] == "light") let[letra - 'A'] = 0;
                    pes[letra - 'A'] = "heavy";   
                }
            }
        }

        for(int i=0; i<12; i++){
            //cout << char('A'+i) << "  " << usado[i] << "  "<< let[i] << "\n";
            if(!usado[i] || !let[i] ) continue;
            cout << char('A'+i) << " is the counterfeit coin and it is " << pes[i] << ".\n";
        }
    }
    

    return 0;
}