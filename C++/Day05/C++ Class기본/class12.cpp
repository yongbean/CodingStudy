class CRequest
{
public:
	static void SLogin()
	{
		if(!s_bLogin)
		{
			s_bLogin = true;
		}
	}
	void s_login()
	{

	}

	void Request()
	{
		//s_login();
		SLogin();
	}

	char* m_RequestType;
	static bool s_bLogin;
};

// 사용자들이 각 개별적으로 들어와서 로그인 하는 것은 낭비라고 할 수 있다.
// 정적 멤버 변수 s_bLogin을 정의하면서 false로 초기화 하였다.

bool CRequest::s_bLogin = false;

void main()
{
	CRequest r1, r2, r3;

	r1.m_RequestType = "List";
	r1.Request();

	r2.m_RequestType = "Download";
	r2.Request();

	r3.m_RequestType = "Upload";
	r3.Request();
}
