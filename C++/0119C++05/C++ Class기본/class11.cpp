#include <iostream>
using namespace std;

class CTest
{
public:
	static void SFunc()
	{
		cout << "SFunc" << endl;	
	}
};

void main()
{
	CTest t;
	t.SFunc();		

	CTest* pT = &t;
	pT->SFunc();	

	CTest::SFunc();	
}
