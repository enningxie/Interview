//
// Created by enningxie on 18-8-12.
//
// 排序与检索
// 大理石在哪儿
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 10000;

int main_06() {
    int n, q, x, a[maxn], kase = 0;
    while(scanf("%d%d", &n, &q) == 2 && n) {
        printf("CASE# %d:\n", ++kase);
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        while(q--) {
            scanf("%d", &x);
            int p = lower_bound(a, a+n, x) - a;  // 在已排序数组a中寻找x 查找大于或等于x的第一个位置
            if (a[p] == x) printf("%d found at %d\n", x, p+1);
            else printf("%d not found\n", x);
        }
    }
    return 0;
}
