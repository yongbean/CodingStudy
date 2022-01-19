#include <iostream>
using namespace std;

class CTest
{
public:
	CTest() : m_C1(1) // 생성자
	{
	}

	const int m_C1; 	//1로 초기화 --> 생성자에 의해 대입
	const int m_C2 = 2; //2로 초기화 --> 클래스 내부 초기화
};

void main()
{
	CTest t;
	cout << t.m_C1 << " " << t.m_C2 << endl;
} 
