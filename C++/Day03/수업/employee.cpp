#include <iostream>
#include <string>
using namespace std;
class Employee {
//Private: 를 적어놓아야한다
	string name;	//Private variables
	int salary;
	int age;		
	
	int getSalary() {	return salary;	} // private method
public:
	
	int getAge() {	return age;	}
	
	string getName() {    return name;	}
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
