class Car { // default 생성자 생략

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
};

/*
 main 안에



	Car myCar;
	myCar.speed = 100;

*/