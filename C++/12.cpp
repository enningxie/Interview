//
// Created by enningxie on 18-8-13.
//
// 栈 stack
#include <stack>
#include <cstdio>

using namespace std;

int main_12(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    printf("%d\n", s.top());
    s.pop();
    printf("%d\n", s.top());
    s.pop();
    printf("%d\n", s.top());
    s.pop();
    return 0;
}
