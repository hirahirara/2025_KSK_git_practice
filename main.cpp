#include <bits/stdc++.h>
using namespace std;

input() {}

int calc(int N, int L, std::vector<int> A) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] >= L) {
            cnt++;
        }
    }
    return cnt;
}

output() {}

main() {
    input();
    m = calc(M);
    output();
}
