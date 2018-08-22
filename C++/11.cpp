//
// Created by enningxie on 18-8-13.
//
// 斐波那契数列
int fib(int n){
    if(n < 1) return n;
    return fib(n - 1) + fib(n - 2);
}

const int MAX_N = 50;
int mem[MAX_N + 1];

int fib_2(int n){
    if(n < 1) return n;
    if(mem[n] != 0) return mem[n];
    return mem[n] = fib_2(n - 1) + fib_2(n - 2);
}
