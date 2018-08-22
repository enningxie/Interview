//
// Created by enningxie on 18-8-12.
//
// 集合set 就是数学上的集合，每个元素最多出现一次
// 安迪的第一个字典
#include <iostream>
#include <string>
#include <set>
#include <sstream>
using namespace std;

set<string> dict;  // string 集合

int main_08() {
    string s, buf;
    while(cin >> s){
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i])){
                s[i] = tolower(s[i]);
            }
            else {
                s[i] = ' ';
            }
        }
        stringstream ss(s);
        while(ss >> buf) dict.insert(buf);
    }
    for(set<string>::iterator it = dict.begin(); it != dict.end(); ++it)
        cout << *it << endl;
    return 0;
}
