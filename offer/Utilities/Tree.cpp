//
// Created by enningxie on 18-8-22.
//
#include <vector>
#include <cstdio>

struct TreeNode{
    int m_nValue;
    std::vector<TreeNode*> m_vChildren;
};

TreeNode* CreateTreeNode(int value){
    TreeNode* pNode = new TreeNode();
    pNode->m_nValue = value;

    return pNode;
}

void ConnectTreeNodes(TreeNode* pParent, TreeNode* pChild){
    if(pParent != nullptr)
        pParent->m_vChildren.push_back(pChild);
}

void PrintTreeNode(const TreeNode* pNode){
    if(pNode != nullptr){
        printf("value of this node is: %d.\n", pNode->m_nValue);

        printf("its children is as following:\n");
        std::vector<TreeNode*>::const_iterator i = pNode->m_vChildren.begin();
        while(i < pNode->m_vChildren.end()){
            if(*i != nullptr)
                printf("%d\t", (*i)->m_nValue);
        }

        printf("\n");
    } else{
        printf("this node is nullptr.\n");
    }
    printf("\n");
}

void PrintTree(const TreeNode* pRoot){
    PrintTreeNode(pRoot);

    if(pRoot != nullptr){
        std::vector<TreeNode*>::const_iterator i = pRoot->m_vChildren.begin();
        while(i < pRoot->m_vChildren.end()){
            PrintTree(*i);
            ++i;
        }
    }
}

void DestoryTree(TreeNode* pRoot){
    if(pRoot != nullptr){
        std::vector<TreeNode*>::iterator i = pRoot->m_vChildren.begin();
        while(i < pRoot->m_vChildren.end()){
            DestoryTree(*i);
            ++i;
        }
        delete pRoot;
    }
}
