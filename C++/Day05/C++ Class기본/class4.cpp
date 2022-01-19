#include <iostream>
using namespace std;

class CTest
{
public:
	int m_I;
	static int s_I; // 정적 멤버 변수 선언 ->class당 한개 -->초기화와 관련되어있다.
	//class에 의해 선언 및 외부에서 선언 되어야 한다.
};

int CTest::s_I = 2; //c에서의 전역변수처럼 사용된다.
//일반변수처럼 사용 할 수 있도록
//:: 사용하여 CTest의 소속이라는 것을 알려줄 수 있도록

int main()
{
	CTest t1;
	t1.m_I = 1;
	t1.s_I = 2;	//메모리 주소를 t2.s_I와 공유한다 -->s_I가 정적 멤버 변수로 선언됬기 때문

	CTest t2;
	t2.m_I = 3;
	t2.s_I = 4;	

	cout << "t1: " << t1.m_I << " " << t1.s_I << endl;
	cout << "t2: " << t2.m_I << " " << t2.s_I << endl;
	return 0;
}
