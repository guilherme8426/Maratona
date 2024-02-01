#include <bits/stdc++.h>

using namespace std;

int cavalo(int N, int M) {
    if (M > N) swap(M, N);
    
    if (M == 1)
        return N;

    else if (M == 2)
        return (N / 4) * 4 + ((N % 4 < 3) ? (N % 4) * 2 : 4);
    else
        return ceil((M * N) / 2.0);
}

int main(void) {
    int N, M;

    while (scanf("%d %d", &N, &M) != EOF && N > 0 && M > 0) {
        printf("%d knights may be placed on a %d row %d column board.\n", cavalo(N, M), N, M);
    }

    return 0;
}