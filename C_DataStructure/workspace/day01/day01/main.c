//
//  main.c
//  Day01
//
//  Created by Yongbean Chung on 2022/01/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 배열
    // 배열의 선언
    // 자료형 배열명[] = {값, 값, 값,,...};
    int ar[] = {10, 20, 30};
    printf("ar : %d\n", ar);
    printf("ar + 1 : %d\n", ar + 1);
    printf("ar + 2 : %d\n\n", ar + 2);
    
    // * 연산자
    // 5 * 2 : 곱셈 연산자
    // 주소값 : 역참조연산자, 해당 주소로 가서 값을 읽어줘
    *ar = 100;
    printf("*ar : %d\n", *ar); // 그 주소에 저장된 값
    printf("*ar + 1: %d\n", *ar + 1);
    printf("*ar + 2: %d\n\n", *ar + 2);
    printf("*(ar + 1): %d\n", *(ar + 1));
    printf("*(ar + 2): %d\n", *(ar + 2));
    printf("ar[0] : %d\n", ar[0]); // index 연산자 [n]
    printf("ar[1] : %d\n", ar[1]);
    printf("ar[2] : %d\n", ar[2]);
    
    printf("sizeof(ar) : %d\n", sizeof(ar));
    printf("sizeof(int) : %d\n", sizeof(int));
    
    //문자타입의 배열
    printf("---------------------\n");
    char str[] = {'a', 'p', 'p', 'l', 'e'};
    printf("sizeof(str) : %d\n", sizeof(str));
    printf("str: %s\n", str); // 끝을 모르기 때문에 이렇게 나온다 --> \0을 넣어줘야한다
    char str2[] = "apple";
    printf("sizeof(str2) : %d\n", sizeof(str2));
    printf("str2: %s\n", str2);
    //str2[0] = 'K'; 배열에 추가 가능
    printf("str2[0]: %c\n", str2[0]);
    
    //값은 추가 가능 --> 주소값은 사용자가 변경 불가능 --> 컴퓨터가 최적의 주소값을 찾아서 사용한다
    return 0;
}
