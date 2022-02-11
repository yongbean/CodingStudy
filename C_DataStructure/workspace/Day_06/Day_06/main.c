//
//  main.c
//  Day_06
//
//  Created by Yongbean Chung on 2022/02/08.
//


// 스택 만들기


#include <stdio.h>
#define MAX 10

typedef struct Stack{
    int ar[MAX];
    int top; // 꼭대기의 인덱스번호를 알고 있는 변수
}Stack;

//초기화 함수
void init(Stack* s) {
    s->top = -1; // 요소가 없음으로 현재 꼭대기는 -1이 된다
}

// 확인용 함수
void show(Stack* s) {
    printf("------------------------\n");
    for(int i = 0; i < s->top + 1; i++) {
        printf("| %d ", s->ar[i]);
    }
    printf("\n------------------------\n");
}


// push() : 스택에 요소를 추가하는 함수 ==> append()와 비슷하다
void push(Stack* s, int element){
    //이미 스택에 요소가 가득 차 있다면 실패
    if(s->top == MAX - 1) {
        printf("STACK 가득참\n");
        return;
    }
//    s->top++; // 순서 중요 --> top == -1이기 때문에 +1을 먼저 해줘야 함 --> 설계하기 나름
//    s->ar[s->top] = element;
    s->ar[++s->top] = element;
}

// pop() : 스택에서 요소를 삭제해주는 함수, 삭제된 요소를 return 한다
int pop(Stack* s) {
    //스택이 비어있을 경우 실패
    if(s->top == -1) {
        printf("스택 비어있음\n");
        return 0;
    }
//    int target = s->ar[s->top];
//    s->top--;
//    return target;
    return s->ar[s->top--];
}


// peek() : top에 위치한 요소를 엿보는 함수
int peek(Stack* s) {
    //비어있다면 실패
    if(s->top == -1) {
        printf("요소 비어있음\n");
        return 0;
    }
    return s->ar[s->top];
}


// clear() : 스택에 있는 모든 요소를 삭제해주는 함수
void Clear(Stack* s) {
    s->top = -1;
}


int main() {
    Stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    show(&s);
    printf("삭제된 요소 : %d\n", pop(&s));
    show(&s);
    printf("top에 있는 요소 : %d\n", peek(&s));
    show(&s);
    Clear(&s);
    show(&s);
    
    
    
    return 0;
}
