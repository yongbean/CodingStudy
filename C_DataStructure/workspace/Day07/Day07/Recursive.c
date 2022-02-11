#include <stdio.h>

int getSum(int n) {
    int total = 0;
    for(int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int reSum(int n) {
    if(n == 1) return 1;
    
    return n + reSum(n - 1);
}

// 1부터 매개변수로 받아온 값까지의 곱을 알려주는 함수 만들기
// 반복문
int getMult(int n) {
    int total = 1;
    for(int i = 2; i <= n; i++) {
        total *= i;
    }
    return total;
}
// 재귀함수
int reMult(int n) {
    if(n == 1) return 1;
    
    return n * reMult(n - 1);
}

// 이름을 5번 출력해주는 함수, 재귀함수
void printName(char* name, int n) {
    if(n == 1) printf("%s\n", name);
    else{
        printf("%s\n", name);
        printName(name, n - 1);
    }
}

int main() {
    int n = 5;
    printf("getSum() 결과 : %d\n", getSum(n));
    printf("reSum() 결과 : %d\n", reSum(n));
    printf("getMult() 결과 : %d\n", getMult(n));
    printf("reMult() 결과 : %d\n", reMult(n));
    
    char name;
    printf("Type in name: ");
    scanf("%s", &name);
    printName(&name, 5);
    return 0;
}
