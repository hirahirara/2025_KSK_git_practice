#include <bits/stdc++.h>
using namespace std;

int input() {
    int M;
    cout << "12月30日M時から次の年になるまでは何時間か" << endl;
    cout << "Mの値を入力してください: ";
    cin >> M;
    return M;
}

int calc(M) {
    return 48 - M;
}

void output(int m)
{
    cout << m << endl;
}

main() {
    int m;
    input(m);
    calc(m);
    output(m);
}
