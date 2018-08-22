//
// Created by enningxie on 18-8-13.
//
// 队列 queue
#include <queue>
#include <cstdio>

using namespace std;

int main_13(){
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    printf("%d\n", que.front());
    que.pop();
    printf("%d\n", que.front());
    que.pop();
    printf("%d\n", que.front());
    que.pop();
    return 0;
}
