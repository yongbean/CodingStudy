//
//  main.cpp
//  day04
//
//  Created by Yongbean Chung on 2022/01/18.
//

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int speed;
    int gear;
    string color;
    
public:
    int getSpeed();
    void setSpeed(int s);
    void setSpeed(double s);
};

int Car::getSpeed(){
    return speed;
}

void Car::setSpeed(int s){
    speed = s;
}

void Car::setSpeed(double s){
    speed = (int)s;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Car myCar;
    myCar.setSpeed(80);
    myCar.setSpeed(85.5);
    
    cout << "차의 속도는" << myCar.getSpeed() << endl;
    return 0;
}
