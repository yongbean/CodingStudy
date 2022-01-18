//
//  main.cpp
//  circle
//
//  Created by Yongbean Chung on 2022/01/17.
//

/*
#include <iostream>

class Circle {
public:
    double radius; // 데이터 필드(변수, 멤버 변수)
    
    Circle() { //default 생성자
        radius = 1;
    }
    
    Circle(double radius) {
        radius = new Radius;
    }
    
    double area() {
        return radius * radius * 3.14159;
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //Circle circle1 = new Circle(); // ==> JAVA
    
    Circle circle1; // ==> C++
    
    
    return 0;
}

*/

//한개 이상의 객체 생성 후 데이터 대입/ 정의


/* //car1.cpp
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    
    int speed;
    int gear;
    string color;

    
    void speedUp() {
        speed += 10;
    }


    void speedDown() {
        speed -= 10;
    }
    void show() { // 상태출력멤버함수
        cout << "============== " << endl;
        cout << "속도: " << speed << endl;
        cout << "기어: " << gear << endl;
        cout << "색상: " << color << endl;
        cout << "============== " << endl;
    }


};

int main()
{
    Car myCar, yourCar;

    myCar.speed = 100;


    myCar.gear = 3;
    myCar.color = "red";

    yourCar.speed = 10;
    yourCar.gear = 1;
    yourCar.color = "blue";

    myCar.speedUp();
    yourCar.speedUp();
    
    myCar.show();
    yourCar.show();

    return 0;
}

*/

#include <iostream>
#include <string>
using namespace std;
class Employee {
//Private: 를 적어놓아야한다
    string name;    //Private variables
    int salary;
    int age;
    
    int getSalary() {    return salary;    } // private method
public:
    
    int getAge() {    return age;    }
    
    string getName() {    return name;    }
};

int main()
{
    Employee e;
    e.salary = 300;
    e.age = 26;
    int sa = e.getSalary();
    string s = e.getName();
    int a = e.getAge();
}
