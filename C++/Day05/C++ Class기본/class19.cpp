class CParentA
{
public:
	int m_Value;
};

class CParentB
{
public:
	int m_Value;
};

class CTest : public CParentA, public CParentB
{
public:
	int m_Value;
};

void main()
{
	CTest t;
	t.CParentA::m_Value = 1;
	t.CParentB::m_Value = 2;
	t.m_Value = 3;	
}
