//
//  main.cpp
//  220125_Day09
//
//  Created by Yongbean Chung on 2022/01/25.
//

#include <iostream>
#include "CircleWithDestructor.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Circle circle(5); // circle 생성
    Circle circle2(circle); // 복사 생성자 사용하여 circle2 생성
    
    cout << "After creating circle2 form circle:" << endl;
    cout << "\tcircle.getRadius() returns " << circle.getRadius() << endl;
    cout << "\tcircle2.getRadius() returns " << circle2.getRadius() << endl;
    
    circle.setRadius(10.5);
    circle2.setRadius(20.5);
    
    cout << "After creating circle form circle2:" << endl;
    cout << "\tcircle.getRadius() returns " << circle.getRadius() << endl;
    cout << "\tcircle2.getRadius() returns " << circle2.getRadius() << endl;
    
    
    return 0;
}
