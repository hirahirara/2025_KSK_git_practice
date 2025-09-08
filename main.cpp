#include <bits/stdc++.h>
using namespace std;

int input() {
    int M;
    cout << "12月30日M時から次の年になるまでは何時間か" << endl;
    cout << "Mの値を入力してください: ";
    cin >> M;
    return M;
}

int calc(int N, int L, vector<int> A) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] >= L) {
            cnt++;
        }
    }
    return cnt;
}

void output(int m) {
    cout << m << endl;
}

main() {
    int m;
    m = input();
    m = calc(m);
    output(m);
}
