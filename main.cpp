#include <bits/stdc++.h>
using namespace std;

input() {}

int calc(int N, int L, vector<int> A) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] >= L) {
            cnt++;
        }
    }
    return cnt;
}

<<<<<<< Updated upstream
output() {}

main() {
    input();
    m = calc(M);
    output();
=======
int calc(int M) {
    return 48 - M;
}

void output(int m) {
    cout << m << endl;
}

int main() {
    int m;
    m = input();
    m = calc(m);
    output(m);
    return 0;
>>>>>>> Stashed changes
}
