//
// Created by enningxie on 18-8-11.
//
// 展示C++特性
#include <iostream>
#include <algorithm>

using namespace std;
const int maxn = 100 + 10;
int A[maxn];
int main_02() {
    long long a, b;
    while(cin >> a >> b){
        cout << min(a, b) << endl;
    }
    return 0;
}