//
//  main.c
//  basic_01.c
//
//  Created by Yongbean Chung on 2022/02/03.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//구조체 정의
struct Student {
    char name[30]; // 멤버변수
    int kor;       // 멤버변수
    int eng;       // 멤버변수
};

// 구조체에 별명 설정하기
// 구조체 변수 선언시
// struct Korean 구조체변수명;
//Kor 구조체변수명;
typedef struct Korean {
    int age;
}Kor;

//구조체 별명만 설정하는 방식
typedef struct {
    int age;
}Person;


int main() {
    //변수 선언
    int num;
    //구조체 변수 선언
    struct Student kim; // kim: 구조체 변수
    //구조체 내부의 변수에 값을 저장하기
    // 하위 연산자(.) 을 활용한다
    
    kim.eng = 100;
    kim.kor = 70;
    //kim.name = "배상엽";
    //문자열에 값ㅇ르 대입하는 함수 strcpy(), string.h 에 정의되어있다
    strcpy(kim.name, "배상엽");
    
    
//    char str[20] = "korea";
//    str = "japan";
    
    printf("이름: %s\n국어점수 : %d\n영어점수 : %d\n", kim.name, kim.kor, kim.eng);
    
    
    //변수 선언과 초기화 동시에
    int num1 = 10;
    //구조체 변수 선언과 초기화 동시에
    struct Student s1 = {"김철수", 50, 30}; // 멤버변수 순서에 맞추어 들어간다
    printf("이름: %s\n국어점수 : %d\n영어점수 : %d\n", s1.name, s1.kor, s1.eng);
    
    //멤버변수 이름을 직적 면시하여 초기화를 할 수 있다
    struct Student s2 = {.eng = 100, .name = "홍길동", .kor = 70};
    printf("이름: %s\n국어점수 : %d\n영어점수 : %d\n", s2.name, s2.kor, s2 .eng);
    
    printf("구조체변수 사이즈 : %d\n", sizeof(s2));
    
    //별명 설정한 구조체 변수 선언
    struct Korean k1;
    Kor k2;
    
    
    //별명만 설정한 구조체변수 선언
    Person p1;
    //struct Person p2; 기존 방식은 사용 불가능
    
    
    
    return 0;
}
