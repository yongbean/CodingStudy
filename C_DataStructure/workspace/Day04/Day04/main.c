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
    //int size; 를 사용해 길이를 재는 것이 가능
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
    //printf("%d노드의 주소 : %d\n", element, newNode);
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

//리스트 요소의 갯수를 알려주는 함수
int len(List* list){
    if(list->first == NULL){
        return 0;
    }
    Node* curr = list->first;
    int length = 0;
    while(curr != NULL){
        length++;
        curr = curr->link;
    }
    //반복문이 다 끝나게 된다면 length에는 리스트 요소의 갯수가 담기게 된다
    return length;
}


// void insert(List* list, int index, int element){
void insert(List* list, int index, int element){
    //인덱스번호가 음수이거나 길이보다 클 경우
    if(index < 0 || index > len(list)) {
        printf("ERROR: 인덱스번호 범위 오류\n");
        return;
    }
    // 삽입하고자 하는 index가 0번일 경우
    if(index == 0){
        insertFirst(list, element);
        return;
    }
    
    
    Node* curr = list->first;
    for(int i = 0; i < index-1; i++){
        curr = curr->link;
    }
    //반복문을 다 돌면 curr에는 내가 삽입할 이전 노드가 들어있다
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = element;
    newNode->link = curr->link;
    curr->link = newNode;
}
/*삭제*/
//맨 앞 요소 삭제
void removeFirst(List* list){
    //리스트가 비어있다면 삭제 실패
    if(list->first == NULL){
        printf("NO ELEMENT\n");
        return;
    }
    
    // 삭제할 노드
    Node* removeNode = list->first;
    // 첫번째 노드로 삭제할 노드 다음 노드를 담아준다
    list->first = removeNode->link;
    // 연결을 끊어준 노드를 메모리에서 해제시켜준다
    free(removeNode);
    
}

//마지막 요소 삭제하기
void removeLast(List* list){
    if(list->first == NULL){
        printf("NO ELEMENTS\n");
        return;
    }
    //리스트의 요소가 한 개 들어있을 경우
    if(len(list) == 1){
        removeFirst(list);
        return;
    }
    
    Node* curr = list->first;
    while(curr->link->link != NULL){ // 리스트 요소가 한개 들어있을 경우
        // 조건식을 검사하면서 curr->link가 NULL이기 때문에
        // curr->link->link는 사실상 NULL->link
        curr = curr->link;
    }
    //반복이 끝나면 curr에는 마지막 이전 노드가 들어있다
    free(curr->link);
    curr->link = NULL;
}
// 전체 요소 삭제
void Clear(List* list){
    int length = len(list);
    for(int i = 0; i < length; i++){
        removeFirst(list);
    }
}

//인덱스번호로 삭제하기
void removeByIndex(List* list, int index){
    if(index > len(list)-1 || index < 0){
        printf("Incorrect index input.\n");
        return;
    }
    if(list->first == NULL){
        printf("NO ELEMENTS\n");
        return;
    }
    
    //0번째 요소
    if(len(list) == 1){
        removeFirst(list);
        return;
    }
    
    Node* curr = list->first;
    for(int i = 0; i < index - 1; i++){
        curr = curr->link;
    }
    //curr에는 삭제하기 이전 노드가 들어가 있다
    Node* removeNode = curr->link;
    curr->link = removeNode->link;
    free(removeNode);
    
}

/*수정*/
//첫 번쨰 요소 수정하기
void updateFirst(List* list, int element){
    // 요소가 없을 경우 실패
    if(list->first == NULL){
        printf("NO ELEMENTs\n");
        return;
    }
    
    list->first->data = element;
}

//인덱스번호로 요소 수정하기
void update(List* list, int index, int element){
    // 인덱스 범위 오류
    if(index < 0 || index > len(list) - 1){
        printf("ERROR: 인덱스 오류\n");
        return;
    }
    // 첫 번째 혹은 마지막 요소 수정시에 오류가 발생하는지?
    Node* curr = list->first;
    for(int i = 0; i < index; i++){
        curr = curr->link;
    }
    
    curr->data = element;
}

/*검색*/
void Select(List*list, int index, int* res){
    if(index < 0 || index > len(list) - 1){
        printf("ERROR: 인덱스 오류\n");
        *res = NULL;
        return;
    }
    Node* curr = list->first;
    for(int i = 0; i  < index; i++){
        curr = curr->link;
    }
    *res = curr->data;
}






int main() {
    List list;
    init(&list);
    insertFirst(&list, 10);
    insertFirst(&list, 20);
    insertFirst(&list, 30);
    insertFirst(&list, 40);
    insertFirst(&list, 50);
    show(&list);
    insert(&list, 3, 1000);
    show(&list);
    removeFirst(&list);
    show(&list);
    removeLast(&list);
    show(&list);
    removeByIndex(&list, 1);
    show(&list);
    update(&list, 2, 100);
    show(&list);
    int res;
    Select(&list, 0 , &res);
    printf("res : %d\n", res);
    Clear(&list);
    show(&list);
    return 0;
}
