//
// Created by enningxie on 18-8-12.
//
// 使用两个引用交换两个变量
#include <iostream>
using namespace std;

void swap2(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

int main_03() {
    int a = 3, b = 4;
    swap2(a, b);
    cout << a << " " << b << endl;
    return 0;
}
