#include <iostream>
#include <string>
using namespace std;

class Car {
private:       
    
    int speed;		
    int gear;	
    string color;	
public:
  
    int getSpeed() {
        return speed;
    }
    
    void setSpeed(int s) {	
        speed = s;
    }
    
    int getGear() {
        return gear;
    }
   
    void setGear(int g) {	
        gear = g;
    }
    
    string getColor() {
        return color;
    }
  
    void setColor(string c) {	
        color = c;
    }


}; // inline함수가 된다.
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

//get/set 함수 : private로 선언된 멤버 필드에 접근하여 데이터를 수정할 수 있다.
//              멤버 변수를 사용하지 않고 멤버 함수를 통해서 접근하기 때문에
//              간접 접근이라고 할 수 있다.

//은닉화