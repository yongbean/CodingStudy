class CTest
{
	char* m_Name;	// private
	
public:
	int m_Level;	// public
};

struct STest
{
	char* m_Name;	// public

private:
	int m_Level;	// private
};

void main()
{
	CTest c; //class
//	c.m_Name = "Class";		
	c.m_Level = 2;			

	STest s; //struct
	s.m_Name = "Struct";	
//	s.m_Level = 1;			
}
