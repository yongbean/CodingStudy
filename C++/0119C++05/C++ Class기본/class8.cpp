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
	CTest* pT = &t;
	pT->Show();		

	pT = NULL;
	pT->Show();		
}
