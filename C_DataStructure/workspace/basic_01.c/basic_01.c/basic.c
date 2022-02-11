#include <stdio.h>

typedef struct Student {
    char name[30];
    int score;
}Student;

int main() {
    //구조체 배열
    /*Student s1 = {"김철수", 80};
    Student s2 = {"김영희", 50};
    Student s3 = {"홍길동", 60};*/
    
    //구조체 배열
    //Student ar[] = {s1, s2, s3};
    Student ar[] = {
        {"김철수", 80},
        {"김영희", 50},
        {"홍길동", 60}
    };
    //int ar[]
    
    //배열 속에서 홍길동 이라는 문자열 출력하기
    // ar[2] --> s3
    printf("ar[2].name : %s\n",ar[2].name);
    
    // 구조체 포인터
    // 포인터는 포인터인데, 구조체변수의 주소값을 담아주는 포인터
    int num = 100;
    int* ptr = &num; // *ptr
    Student kim = {"김철수", 100};
    Student* sptr = &kim; // 구조체 포인터
    
    printf("Kim의 주소값 : %d\n", &kim);
    printf("sptr : %d\n", sptr);
    
    //*sptr : kim
    
    //(*sptr).name : kim.name
    
    (*sptr).score = 50;
    //구조체 포인터를 통해 멤버변수 접근하기
    printf("(*sptr).name : %s\n", (*sptr).name);
    printf("(*sptr).score : %d\n", (*sptr).score);
    
    // ->
    printf("sptr->name : %s\n", sptr->name);
    printf("sptr->score : %d\n", sptr->score);
    //kim -> name ==> error kim은 주소값이 아니기 때문
    
    
    
    
    
    
    
    
    return 0;
}
