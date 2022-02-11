#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;  // 왼쪽자식을 저장할 포인터 변수
    struct Node* right; // 오른쪽자식을 저장할 포인터변수
}BinNode;

// 확인용 함수

// 전위 수회 : 본인방문 -> 왼쪽자식 -> 오른쪽자식
void proShow(BinNode* node) {
    if(node != NULL){
        printf("[%d] ", node->data);
        proShow(node->left);
        proShow(node->right);
    }
}

// 중위 순회 : 왼쪽자식 -> 본인방문 -> 오른쪽자식
void inShow(BinNode* node) {
    if(node != NULL) {
        inShow(node->left);
        printf("[%d] ", node->data);
        inShow(node->right);
    }
}

//후위 순회 : 왼쪽자식 -> 오른쪽자식 -> 본인방문
void postShow(BinNode* node) {
    if(node != NULL) {
        postShow(node->left);
        postShow(node->right);
        printf("[%d] ", node->data);
    }
}

void init(BinNode* tree) {
    tree->data = 0;
    tree->left = NULL;
    tree->right = NULL;
}

//추가 --> 재귀함수
BinNode* add(BinNode* tree, int element) {
    if(tree == NULL) { // 비어있는 트리라면 추가하고자 하는 노드가 root가 된다
        tree = (BinNode*)malloc(sizeof(BinNode));
        tree->data = element;
        tree->left = NULL;
        tree->right = NULL;
    }
    else if(tree->data == element) { // 값이 중복된다면
        printf("ERROR : 중복값 입력 불가\n");
    }
    else if(tree->data < element) {
        tree->right = add(tree->right, element);
    }
    else if(tree->data > element) {
        tree->left = add(tree->left, element);
    }
    return tree;
}

int main() {
    BinNode* root;
    root = NULL;
    
    root = add(root, 10); // 최초에 삽입된 데이터는 root 노드가 된다
                          // root에 그 값을 넣어줘야한다
    add(root, 5);
    add(root, 7);
    add(root, 15);
    add(root, 13);
    
    printf("전위 순회: ");
    
    proShow(root);
    printf("\n-------------------\n");
    printf("중위순회 : ");
    inShow(root);
    printf("\n-------------------\n");
    printf("후위순회 : ");
    postShow(root);
    
    
    return 0;
}
