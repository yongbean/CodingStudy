class CTest
{
public:
	CTest()
	{
	}

	CTest(CTest& obj)	
	{
	}
};

void main()
{
	CTest t;
	const CTest ct;

	CTest t1(t);	
	CTest t2(ct);	
}
