class CTest
{
public:
	void Func() {}

	void CFunc1() const
	{
	m_Value = 1;		
	}

	void CFunc2() const
	{
	Func();				
	}

	CTest& CFunc3() const
	{
	return *this;		
	}

	CTest* CFunc4() const
	{
	return this;		
	}

	const CTest& CFunc5() const
	{
	return *this;		
	}

	const CTest* CFunc6() const
	{
	return this;		
	}

	int m_Value;
};
