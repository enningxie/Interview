//
// Created by enningxie on 18-8-22.
//
// 从尾到头打印链表
#include <stack>
#include <cstdlib>
#include <cstdio>

struct ListNode{
    int m_nValue;
    ListNode* m_pNext;
};

void PrintList(ListNode* pHead){
    printf("PrintList starts.\n");

    ListNode* pNode = pHead;
    while(pNode != nullptr){
        printf("%d\t", pNode->m_nValue);
        pNode = pNode->m_pNext;
    }

    printf("\nPrintList ends.\n");
}

ListNode* CreateListNode(int value){
    ListNode* pNode = new ListNode();
    pNode->m_nValue = value;
    pNode->m_pNext = nullptr;

    return pNode;
}

void ConnectListNodes(ListNode* pCurrent, ListNode* pNext){
    if(pCurrent == nullptr){
        printf("Error to connect two nodes.\n");
        exit(1);
    }

    pCurrent->m_pNext = pNext;
}

void DestroyList(ListNode* pHead){
    ListNode* pNode = pHead;
    while(pNode != nullptr){
        pHead = pHead->m_pNext;
        delete pNode;
        pNode = pHead;
    }
}

void PrintListReversingly_Iteratively(ListNode* pHead){
    std::stack<ListNode*> nodes;

    ListNode* pNode = pHead;
    while(pNode != nullptr){
        nodes.push(pNode);
        pNode = pNode->m_pNext;
    }

    while(!nodes.empty()){
        pNode = nodes.top();
        printf("%d\t", pNode->m_nValue);
        nodes.pop();
    }
}

void PrintListReversingly_Recursively(ListNode* pHead){
    if(pHead != nullptr){
        if(pHead->m_pNext != nullptr)
            PrintListReversingly_Recursively(pHead->m_pNext);
        printf("%d\t", pHead->m_nValue);
    }
}


// test
void Test(ListNode* pHead){
    PrintList(pHead);
    PrintListReversingly_Iteratively(pHead);
    printf("\n");
    PrintListReversingly_Recursively(pHead);
}

// 1->2->3->4->5
void Test1(){
    printf("\nTest1 begins.\n");

    ListNode* pNode1 = CreateListNode(1);
    ListNode* pNode2 = CreateListNode(2);
    ListNode* pNode3 = CreateListNode(3);
    ListNode* pNode4 = CreateListNode(4);
    ListNode* pNode5 = CreateListNode(5);

    ConnectListNodes(pNode1, pNode2);
    ConnectListNodes(pNode2, pNode3);
    ConnectListNodes(pNode3, pNode4);
    ConnectListNodes(pNode4, pNode5);

    Test(pNode1);

    DestroyList(pNode1);
}

// 只有一个结点的链表: 1
void Test2()
{
    printf("\nTest2 begins.\n");

    ListNode* pNode1 = CreateListNode(1);

    Test(pNode1);

    DestroyList(pNode1);
}

// 空链表
void Test3()
{
    printf("\nTest3 begins.\n");

    Test(nullptr);
}

int main(int argc, char* argv[])
{
    Test1();
    Test2();
    Test3();

    return 0;
}