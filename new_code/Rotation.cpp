//
// Created by enningxie on 18-8-17.
//
#include <string>
using namespace std;
class Rotation {
public:
    bool chkRotation(string A, int lena, string B, int lenb) {
        // write code here
        if(lena != lenb)
            return false;
        string C = A + A;
        if(C.find(B) != string::npos)
            return true;
        else
            return false;

    }
};
