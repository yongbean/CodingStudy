#include <iostream>
#include <string>
using namespace std;

class DeskLamp {
private:
	
	bool isOn;		 

public:
	
	void turnOn();	
	void turnOff(); 
	void print();	
};

void DeskLamp::turnOn()
{
	isOn = true;
}

void DeskLamp::turnOff()
{
	isOn = false;
}

void DeskLamp::print()
{
	cout << "·¥ÇÁ°¡ " << (isOn == true ? "ÄÑÁü" : "²¨Áü") << endl;
}

int main() {
	
            DeskLamp lamp;

	lamp.turnOn();
	lamp.print();
	lamp.turnOff();
	lamp.print();

	return 0;
}
