#include <iostream>
using namespace std;

class CFamily						
{
protected:					//상속 관계에서 자식 클래스에게만 접근 허용					
	char* m_FamilyName;		//멤버 변수 지정(정의)	

public:								
	void SetFamilyName(char* arg)	
	{
		m_FamilyName = arg;
	}
};

class CName : public CFamily, public AFamily	//상속 , JAVA -> extends // c++: 다중 상속 가능 --> ,를 사용해 붙이면 된다.
{
private:							
	char* m_Name;

public:								
	void SetName(char* arg);		
	void ShowName()					
	{
		cout << m_FamilyName << " " << m_Name << endl;
	}
};

void CName::SetName(char* arg)		//외부에서 CName 함수 내용을 정의 내렸다
{
	m_Name = arg;
}

void main()
{
	CName name;
	name.SetFamilyName("Kim");
	name.SetName("Do Hyung");
	name.ShowName();
}
