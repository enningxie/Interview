//
// Created by enningxie on 18-8-22.
//
void Reverse(char* pBegin, char* pEnd){
    if(pBegin == nullptr || pEnd == nullptr)
        return;

    while(pBegin < pEnd){
        char temp = *pBegin;
        *pBegin = *pEnd;
        *pEnd = temp;

        pBegin++, pEnd--;
    }
}
