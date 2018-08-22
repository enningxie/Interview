//
// Created by enningxie on 18-8-21.
//
// 不修改数组找出重复的数字

#include <iostream>

int countRange(const int* numbers, int length, int start, int end){
    // xz
    if(numbers == nullptr)
        return 0;

    int count = 0;
    for(int i = 0; i < length; ++i){
        if(numbers[i] >= start && numbers[i] <= end)
            ++count;
    }
    return count;
}

int getDuplication(const int* numbers, int length){
    // xz
    if(numbers == nullptr || length <= 0)
        return -1;

    int start = 1;
    int end = length - 1;
    while(end >= start){
        int middle = ((end - start) >> 1) + start;
        int count = countRange(numbers, length, start, middle);
        if(end == start){
            if(count > 1)
                return start;
            else
                break;
        }
        if(count > (middle - start + 1))
            end = middle;
        else
            start = middle + 1;
    }
    return -1;
}


// test
void test_(const char* testName, int* numbers, int length, int* duplications, int dupLength){
    int result = getDuplication(numbers, length);
    for(int i = 0; i < dupLength; ++i){
        if(result == duplications[i]){
            std::cout << testName << " passed." << std::endl;
            return;
        }
    }
    std::cout << testName << " FAILED." << std::endl;
}

// 多个重复的数字
void test1_(){
    int numbers[] = {2, 3, 5, 4, 3, 2, 6, 7};
    int duplications[] = {2, 3};
    test_("test1", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 一个重复的数字
void test2_(){
    int numbers[] = {3, 2, 1, 4, 4, 5, 6, 7};
    int duplications[] = {4};
    test_("test2", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 重复的数字是数组中最小的数字
void test3_(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 1, 8};
    int duplications[] = {1};
    test_("test3", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 重复的数字是数组中最大的数字
void test4_(){
    int numbers[] = {1, 7, 3, 4, 5, 6, 8, 2, 8};
    int duplications[] = {8};
    test_("test4", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 数组中只有两个数字
void test5_(){
    int numbers[] = {1, 1};
    int duplications[] = {1};
    test_("test5", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 重复的数字位于数组当中
void test6_(){
    int numbers[] = {3, 2, 1, 3, 4, 5, 6, 7};
    int duplications[] = {3};
    test_("test6", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 多个重复的数字
void test7_(){
    int numbers[] = {1, 2, 2, 6, 4, 5, 6};
    int duplications[] = {2, 6};
    test_("test7", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 一个数字重复三次
void test8_(){
    int numbers[] = {1, 2, 2, 6, 4, 5, 2};
    int duplications[] = {2};
    test_("test8", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 没有重复的输入
void test9_(){
    int numbers[] = {1, 2, 6, 4, 5, 3};
    int duplications[] = {-1};
    test_("test9", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
}

// 无效的输入
void test10_(){
    int* numbers = nullptr;
    int duplications[] = {-1};
    test_("test10", numbers, 0, duplications, sizeof(duplications) / sizeof(int));
}

int main(){
    test1_();
    test2_();
    test3_();
    test4_();
    test5_();
    test6_();
    test7_();
    test8_();
    test9_();
    test10_();
    return 0;
}