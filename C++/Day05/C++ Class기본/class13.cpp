class CTest
{
public:
	void Assign(int arg)
	{
		m_Value = arg;	
	}

	void Func() {}		

	int m_Value;
};

void main()
{
	const CTest t;

	t.m_Value = 1;	//멤버 변경 시도
	t.Assign(1);	//멤버 변경 시도
	t.Func();		
}
