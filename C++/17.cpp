//
// Created by enningxie on 18-8-13.
//
// 贪心法 字典序最小问题
#include <cstdio>

// 输入
int N;
const int MAX_N = 2000;
char S[MAX_N + 1];

void solve(){
    // 剩余的字符串为S[a], S[a+1], ..., S[b]
    int a = 0, b = N - 1;
    while (a <= b) {
        // 将从左起和从右起的字符串比较
        bool left = false;
        for (int i = 0; a + i <= b; i++){
            if(S[a + i] < S[b - i]){
                left = true;
                break;
            } else if (S[a + i] > S[b - i]){
                left = false;
                break;
            }
        }
        if (left) putchar(S[a++]);
        else putchar(S[b--]);
    }
    putchar('\n');
}