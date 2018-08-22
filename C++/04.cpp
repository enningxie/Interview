//
// Created by enningxie on 18-8-12.
//
// string 对象
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main_04() {
    string line;  // string
    while(getline(cin, line)) {
        int sum = 0, x;
        stringstream ss (line);  // sstream
        while (ss >> x) sum += x;
        cout << sum << endl;
    }
    return 0;
}
