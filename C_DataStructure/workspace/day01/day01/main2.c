#include <stdio.h>

void change(int *num){ // 지역변수 ==> 바뀌지 않는다
    printf("change() 내부 num 주소 : %d\n", &num);
    *num = 1000; // pointer를 사용해 값을 받아온 후 pointer로 값을 바꿔줘야한다
}

int main(int argc, const char * argv[]){
    int num = 10;
    int* ptr = &num;
    
    printf("change() 외부 num 주소 : %d\n", &num);
    
    printf("change() 사용 전 num : %d\n", num);
    change(&num); //num의 주소값을 넘겨줘야한다
    printf("change() 사용 후 num : %d\n", num);
    
    printf("num : %d\n", num);
    printf("&num: %d\n", &num);
    printf("ptr : %d\n", ptr);
    printf("*ptr: %d\n\n", *ptr);
    
    *ptr = 100;
    printf("num : %d\n", num);
    
    
    return 0;
}
