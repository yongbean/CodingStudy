//
//  main.c
//  day08
//
//  Created by Yongbean Chung on 2022/02/10.
//

#include <stdio.h>

// 1부터 사용자가 입력한 값까지 곱해주는 함수
int factorial(int num) {
    int res = 1;
    for(int i = 1; i <= num; i++) {
        res *= i; // res = res * i;
    }
    return res;
}

int re_fact(int num) {
    if(num == 1) return 1;
    return num * re_fact(num - 1);
}

// 이름을 입력 횟수만큼 출력하는 함수
void printName(int count){
    for(int i = 0; i < count; i++){
        printf("배상엽\n");
    }
}

void re_name(int count){
    //if(count == 0) return;
    printf("배상엽\n");
    if(count != 1) re_name(count - 1);
}

int main() {
    printf("factorial(5) 결과 : %d\n", factorial(5));
    printf("re_fact(5) 결과 : %d\n", re_fact(5));
    
    printName(5);
    printf("------------------\n");
    re_name(5);
    
    return 0;
}
