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

int Car::getSpeed() {
    return speed;

}

void Car::setSpeed(int s) {	
    speed = s;
}

void Car::setSpeed(double s) {	
    speed = (int)s;
}

int main()
{
	Car myCar;

	myCar.setSpeed(80);
	myCar.setSpeed(100.0);

	cout << "차의 속도: " << myCar.getSpeed() << endl;
	return 0;
}