#include <bits/stdc++.h>

using namespace std;

bool comparator(char a, char b){
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

int main(){

    int n;
    string a;

    cin >> n;

    while(n--){
        cin >> a;
        sort(a.begin(), a.end(), comparator);

        do{
            cout << a << "\n";
        }while (next_permutation(a.begin(), a.end(), comparator));
    }

    return 0;
}