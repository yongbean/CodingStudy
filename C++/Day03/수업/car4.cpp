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
    int getGear();
    void setGear(int g);
    string getColor();
    void setColor(string c);
};
//일반 함수처럼 호출해야 된다.
int Car::getSpeed() {

    return speed;
}
void Car::setSpeed(int s) {	
    speed = s;
}
int Car::getGear() {
    return gear;
}
void Car::setGear(int g) {	
    gear = g;
}
string Car::getColor() {
    return color;
}
void Car::setColor(string c) {	
    color = c;
}

int main()
{
	Car myCar;

	myCar.setSpeed(100);
	myCar.setGear(3);
	myCar.setColor("red");

	cout << "���� �ӵ�: " << myCar.getSpeed() << endl;
	cout << "���� ���: " << myCar.getGear() << endl;
	cout << "���� ����: " << myCar.getColor() << endl;

	return 0;
}