#include <iostream>
using namespace std;

class CTest
{
public:
	int m_Value;

	void Show()
	{
		cout << this << endl;
		cout << m_Value << endl;
	}
};

void main()
{
	CTest t;
	CTest* pT = &t; // 
	pT->Show();		// OK --> 객체의 포인터를 이용하여 멤버 함수 호출

	pT = NULL;		// 주소 => 모른다
	pT->Show();		// RunTime Error
}
