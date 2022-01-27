#include <stdio.h>

int main() {
    int ar[] = {1, 2, 3};
    printf("ar : %d\n", ar);
    
    int num = 0;
    int num2 = 100;
    
    int* ptr = &num;
    printf("ptr : %d\n", ptr);
    ptr = &num2; // 포인터변수는 주소를 알고 있으며, 다른 주소값을 대입할 수 있다.
    printf("ptr : %d\n", ptr);
    
    //ar = &num; 배열은 주소를 알고 있긴 하지만, 다른 주소값을 대입할 수는 없다.
    ptr = ar;
    printf("ptr : %d\n", ptr);
    printf("*ptr : %d\n", *ptr);
    printf("*(ptr + 1) : %d\n", *(ptr + 1));
    printf("*(ptr + 2) : %d\n", *(ptr + 2));
    
    printf("---포인터 형식의 문자열 선언---\n");
    
    char str[] = "apple";
    
    char* str2 = "korea"; // str[]과 같은 방식
    
    str2 = "japan"; // 주소값 변경 가능
    //str2[0] = 'K'; 값(element) 변경 불가
    printf("str2 : %s\n", str2);
    
    
    
    return 0;
}
