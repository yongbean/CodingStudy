//
//  LinkedListTest.c
//  arrayListTest
//
//  Created by Yongbean Chung on 2022/02/03.
//

#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data; // 실질적인 리스트의 요소가 저장될 공간
    struct Node* link; // 아직 typedef Node 가 정의되지 않은 상태
}Node; // Node gud typedef 선언이 완료

typedef struct LinkedList {
    Node* first; // 첫번째 노드의 주소값을 저장할 포인터 변수
}List;

//초가화 함수
void init(List* list){
    list->first = NULL;
}

// 요소 확인용 show 함수
void show(List* list) {
    // 순회용 포인터
    Node* curr = list->first; // curr에는 첫번째 노드를 담아준다
    while(curr != NULL){
        printf("[%d] -> ", curr->data);
        curr = curr->link;
    }
    printf("\n");
}

/*추가*/
// 맨 앞에 추가하기
void insertFirst(List* list, int element) {
    //새롭게 추가할 노드는 이 함수 호출이 끝나더라도 메모리에 남아있어야 한다
    //따라서 힙메모리에 동적할당을 해준다
    Node* newNode = (Node*)malloc(sizeof(Node));
    //newNode에는 새롭게 만들어진 노드가 할당된 주소가 담겨있다
    newNode->data = element;
    newNode->link = list->first; // 전에 연결되어 있던 Node와 newNode를 연결한다
    list->first = newNode;
    printf("%d노드의 주소 : %d\n", element, newNode);
}

// 맨 마지막에 추가
void append(List* list, int element) {
    // 리스트에 요소가 한개도 없다면
    if(list->first == NULL){
        insertFirst(list, element); // 맨 처음에 요소를 추가한다
        return;
    }
    Node* curr = list->first;
    while(curr->link != NULL) {
        curr = curr->link;
    }
    // 반복문을 다 돌고 나면 curr에는 마지막 노드가 담긴다
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = element;
    newNode->link = NULL;
    curr->link = newNode;
}

// void insert(List* list, int index, int elemnt{


int main() {
    List list;
    init(&list);
    insertFirst(&list, 10);
    insertFirst(&list, 20);
    insertFirst(&list, 30);
    show(&list);
    return 0;
}
