#include <stdio.h>
#define MAX 100 //매크로 상수, MAX는 100이 담겨있고, 변경할 수 없는 변수가 됨
//ArrayList 구조체 정의

struct Student {
    char name[30];
    int age;
    int score;
};

typedef struct {
    int ar[MAX];// 실질적으로 데이터가 저장되는 저장공간 --> struct student ar[MAX];
    int length; // 리스트의 길이를 관리할 변수
}ArrayList;

//리스트 요소 확인용 show()함수
void show(ArrayList list) {
    for (int i = 0; i < list.length; i++) {
        printf("[%d]", list.ar[i]);
    }
    printf("\n");

}

/*추가*/
// 맨뒤에 추가
void append(ArrayList* list, int element) {
    // 이미 가득 차 있다면 실패
    if (list->length == MAX) {
        printf("ERROR: 리스트 가득참\n");
        return;
    }

    //여기까지 왔다면 리스트가 아직 가득 차지 않았다는 의미
    list->ar[list->length] = element;
    list->length++;

}
// 중간에 삽입
// insert(어떤리스트에?, 어떤 위치에?, 어떤 요소를?)
//실패조건 인덱스번호 유효한지, 리스트가 가득 차잇는지
void insert(ArrayList* list, int index, int element) {
    //인덱스번호가 음수거나 리스트의 길이를 너어섰을때
    if(index < 0 || index > list->length){
        printf("ERROR: 잘못된 입력값\n");
        return;
    }
    //가득 차있다면 실패
    if(list ->length == MAX) {
        printf("ERROR: 용량 초과됨\n");
        return;
    }
    //여기까지 왔다는 것은 정상적인 인덱스번호가 입력되었다는 의미
    for(int i = list->length; i > index; i--){
        //리스트 안에 들어있던 요소를 뒤쪽으로 한 칸씩 옮기는 과정
        list->ar[i] = list->ar[i-1];
    }
    //삽입할 위치에 삽입할 요소를 대입한다
    list->ar[index] = element;
    //삽입이 되었으므로 리스트의 길이
    list->length++;
    
    
    //용훈이형 코딩
//    if (index < 0 || list->length == MAX) {
//        printf("ERROR: 유효하지 않은 인덱스입니다\n");
//        return;
//    }
//    list->length++;
//    for (int i = list->length; i > index; i--) {
//        list->ar[i] = list->ar[i - 1];
//    }
//    list->ar[index] = element;

}

/*삭제*/
//인덱스 번호로 삭제
void removeByIndex(ArrayList* list, int index){
    // 삭제 실패
    // 인덱스 번호 잘못 입력
    // 리스트가 비어있을 때
    if(index < 0 || index > list->length - 1){
        printf("ERROR: 인덱스 번호 잘못됨\n");
        return;
    }
    // 정상적인 인덱스 번호가 입력되었다는 의미
    for(int i = index; i < list->length - 1;i++){
        list->ar[i] = list->ar[i + 1];
    }
    list->length--;
}

// 요소로 삭제하기
int removeElement(ArrayList* list, int element) {
    //인덱스번호를 찾아와야한다
    int index = 0; // 삭제할 요소의 위치 인덱스를 저장할 변수
    int flag = 0;
    for(int i = 0; i < list->length - 1; i++){
        if(list->ar[i] == element){
            index = i;
            flag = 1; // 리스트속에 내가 삭제하고자 하는 요소가 들어있다면
                      // flag변수에 1을 담아준다
            break;
        }
    }
    //for문이 끝나면 index에는 학제할 요소의 인덱스가 들어있다
    if(flag){ // 림ㅎ 변수가 1이라면 삭제할 요소가 있다는 의미이므로 삭제를 해준다
        removeByIndex(list, index);
        return 1; // 삭제가 성공되었다면 1이 return
    }
    else { // 그게 아니라면 삭제를 해주지 않는다
        //printf("ERROR: 요소가 존재하지 않음\n");
        return 0; // 삭제 실패시 0 return
    }
}

// 중복되는 모든 요소 지우기
void removeElements(ArrayList* list, int element){
    while(removeElement(list, element));
}

//리스트의 모든 요소 삭제
void Clear(ArrayList* list) {
    list->length = 0;
}

/*수정*/
void update(ArrayList* list, int index, int element) {
    if (index < 0 || index > list->length - 1){
        printf("ERROR: 잘못된 인덱스\n");
        return;
    }
    list->ar[index] = element;
}

/*검색*/
//인덱스번호로 해당 값 가져오기
void Select(ArrayList* list, int index, int* res) {
    if(index < 0 || index > list->length - 1){
        printf("ERROR: 인덱스번호 잘못됨\n");
        res = NULL;
        return;
    }
    *res = list->ar[index];
}
//list 초기화 함수
void init(ArrayList* list) {
    list->length = 0;
}

int main() {
    ArrayList list;
    init(&list);
    show(list);
    append(&list, 10);
    show(list);
    append(&list, 20);
    append(&list, 30);
    show(list);

    insert(&list, 3, 40);
    show(list);
    
    removeByIndex(&list, 3);
    show(list);
    
    removeElement(&list, 20);
    show(list);
    
    //Clear(&list);
    show(list);

    update(&list, 0, 100);
    show(list);
    
    int num;
    Select(&list, 0, &num);
    printf("0번째 방 요소: %d\n", num);
    return 0;
}
