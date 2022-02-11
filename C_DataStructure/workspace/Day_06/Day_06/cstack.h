//
//  cstack.h
//  Day_06
//
//  Created by Yongbean Chung on 2022/02/08.
//

//#ifndef cstack_h
//#define cstack_h
//
//
//#endif /* cstack_h */


#include <stdio.h>
#define MAX 10
// main 함수만 없다


typedef struct CharStack{
    char ar[MAX];
    int top;
}Stack;

void init(Stack* s) {
    s->top = -1;
}

// isEmpty() : 비어있을때는 1 아닐때는 0을 return 하는 함수
int isEmpty(Stack* s) {
//    if(s->top == -1) {
//        return 1;
//    }
//    return 0;
    return s->top == -1;
}

// isFull() : 가득 차있다면 1 아니라면 0을 return 하는 함수
int isFull(Stack* s) {
    return s->top == MAX -1;
}

//push()
int push(Stack* s, char element){
    // 실패했다면 0이 return 됨
    if(s->top == MAX - 1) return 0;
    s->ar[++s->top] = element;
    return 1;
}

//pop()
int pop(Stack* s, char* res){ // 삭제된 값을 되돌려받을 res
    //해당 스택이 비어있다면 0이 return됨
    if(s->top == -1) return 0;
    *res = s->ar[s->top--];
    //s->top--;
    return 1; // 사제가 성공하면 1을 반환한다
}


//peek()
int peek(Stack* s, char* res) {
    if(s->top == -1) return 0;
    *res = s->ar[s->top];
    return 1;
}


//Clear()
void Clear(Stack* s){
    s->top = -1;
}
