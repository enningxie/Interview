//
// Created by enningxie on 18-8-13.
//
// 贪心法 硬币问题

#include <cstdio>
#include <algorithm>

using namespace std;

// 硬币的面值
const int V[6] = {1, 5, 10, 50, 100, 500};

// 输入
int C[6];
int A;

void solve(){
    int ans = 0;
    for (int i = 5; i >= 0; i--) {
        int t = min(A / V[i], C[i]);
        A -= t * V[i];
        ans += t;
    }
    printf("%d\n", ans);
}
