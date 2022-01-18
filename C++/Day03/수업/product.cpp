#include <iostream>
#include <string>
using namespace std;

class Product {
private:
	int id;
	string name;
	int price;

public:
	void input();
	void print();
	bool isCheaper(Product other);
};

void Product::input() {
	cout << "��ǰ�� �Ϸ� ��ȣ: ";
	cin >> id;
	cout << "��ǰ�� �̸�: ";
	cin >> name;
	cout << "��ǰ�� ����: ";
	cin >> price;
}

void Product::print() {
	cout << " ��ǰ ��ȣ " << id << endl
		<< " ��ǰ�� �̸�: " << name 
		<< " ��ǰ�� ����: " << price << endl;
}

bool Product::isCheaper(Product other) {
	if( price < other.price ) 
		return true;
	else 
		return false;
}

int main() {
	Product p1, p2;

	p1.input();
	p2.input();
	if( p1.isCheaper(p2) ){
		p1.print();
		cout << "�� �� �Դϴ�\n";
	}
	else {
		p2.print();
		cout << "�� �� �Դϴ�\n";
	}

	return 0;
}
