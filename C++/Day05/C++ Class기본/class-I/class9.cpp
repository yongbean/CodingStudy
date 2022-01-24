#include <iostream>
using namespace std;

class CParent // 부모 클래스
{
public:
	CParent()
	{
		cout << "CParent Constructor" << endl;
	}

	CParent(const CParent& obj)
	{
		cout << "CParent Copy Constructor" << endl;
	}
};

class CTest : public CParent
{
public:
	int m_Value;
};

void main()
{
	CTest t;			
	t.m_Value = 1;
	CTest t1 = t;		
}
