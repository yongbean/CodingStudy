//
//  main2.cpp
//  220126
//
//  Created by Yongbean Chung on 2022/01/26.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void gradeRatio(float num);
void averNum(int num);

int main(){
    
    return 0;
}
void gradeRatio(float num){
    if(num <= 4){
        cout << "1등급 입니다\n";
    }
    else if(num <= 11){
        cout << "2등급 입니다\n";
    }
    else if(num <= 23){
        cout << "3등급 입니다\n";
    }
    else if(num <= 40){
        cout << "4등급 입니다\n";
    }
    else if(num <= 60){
        cout << "5등급 입니다\n";
    }
    else if(num <= 77){
        cout << "6등급 입니다\n";
    }
    else if(num <= 89){
        cout << "7등급 입니다\n";
    }
    else if(num <= 96){
        cout << "8등급 입니다\n";
    }
    else cout << "9등급 입니다\n";
}

void averNum(int num){
    srand((unsigned)time(NULL));
    
    
}
