//
//  CircleQue.c
//  Day07
//
//  Created by Yongbean Chung on 2022/02/09.
//
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#define MAX 3

typedef struct CircleQueue{
    int ar[MAX];
    int length; // queue 요소의 갯수를 저장할 변수
    int front; // queue의 front 인덱스를 저장할 변수
    int rear; // queue의 rear 인덱스를 저장할 변수
}Que;

// 초기화 함수
void init(Que* q) {
    q->length = 0;
    q->front = 0;
    q->rear = 0;
}

//확인용 함수
void show(Que* q) {
    int index = q->front;
    printf("---------front : %d, rear : %d\n", q->front, q->rear);
    for(int i = 0; i < q->length; i++) {
        printf("%d | ", q->ar[index]);
        index = (index + 1) % MAX;
    }
    printf("\n------------------------\n");
}

//isFull() : 가득 차있다면 1, 아니면 0을 return 하는 함수
int isFull(Que* q) {
    return q->length == MAX;
}

//isEmpty() : 비어있다면 1 아니면 0을 return 하는 함수
int isEmpty(Que* q) {
    return q->length == 0;
}

// enqueue() : 데이터 삽입 rear부분에 삽입이 된다
void enqueue(Que* q, int element) {
    if(isFull(q)) {
        printf("ERROR : 가득 참\n");
        return;
    }
    q->ar[q->rear] = element;
    q->length++;
    // rear는 맨 마지막이라면 다시 맨 앞으로 이동해야 하기 때문에
    // 나머지 연산자를 활용하여 0번 인덱스를 가리키게 만들 수 있다
    q->rear = (q->rear + 1) % MAX;
}

// dequeue() : 해당 큐에서 요소를 삭제한다(front에 존재하는 요소 삭제,
//             삭제된 정보도 알려줘야한다)
void dequeue(Que* q, int* res) {
    if(isEmpty(q)){
        printf("ERROR : 비어있음\n");
        return;
    }
    *res = q->ar[q->front]; // front에 있는 요소를 결과로 되돌려주고,
    q->front = (q->front + 1) % MAX; // front 인덱스를 옆으로 한 칸 옮긴다
    q->length--; // 요소가 삭제되었다는 의미에서 length를 1 감소시킨다
}
// peek()
void peek(Que* q, int* res) {
    if(isEmpty(q)) {
        printf("ERROR : 요소 비어있음\n");
        return;
    }
    *res = q->ar[q->front];
}

// Clear() : 요소를 모두 비워주는 함수
void Clear(Que* q) {
    q->length = 0;
    q->front = q->rear;
}

int main() {
    Que q;
    init(&q);
    
    while(1) {
        int choice;
        printf("(1)enqueue (2)dequeue (3) peek (4)clear (5)show (6)exit\n");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("input num >> ");
            scanf("%d", &choice);
            enqueue(&q, choice);
        }else if(choice == 2) {
            dequeue(&q, &choice);
            printf("dequeue된 값 : %d\n", choice);
        }else if(choice == 3) {
            peek(&q, &choice);
            printf("peek한 값 : %d\n", choice);
        }else if(choice == 4) Clear(&q);
        else if(choice == 5) show(&q);
        else if(choice == 6) break;
            
    }
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    show(&q);
    return 0;
}
