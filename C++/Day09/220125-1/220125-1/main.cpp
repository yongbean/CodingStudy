//
//  main.cpp
//  220125-1
//
//  Created by Yongbean Chung on 2022/01/25.
//

#include <iostream>
#include "Course.h"
using namespace std;
int main(int argc, const char * argv[]) {
    Course course1("C++", 10);
    Course course2(course1);
    
    course1.addStudent("kim");
    course2.addStudent("park");
    
    cout << "student in course1 : " << course1.getStudent()[0] << endl;
    cout << "student in course2 : " << course2.getStudent()[0] << endl;
    
    
    return 0;
}
