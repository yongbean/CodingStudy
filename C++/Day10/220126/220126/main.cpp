#include <iostream>
using namespace std;

class CTest {
    friend int main();
    friend class COther;
    
private:
    int m_Value;
    
};

class COther {  // private
    void Func(CTest& obj) {
        obj.m_Value++;
    }
};

int main() {
    CTest t;
    t.m_Value = 1;
    
    COther o;
    o.Func(t);
    
    cout << t.m_Value << endl;
    return 0;
}


// CChild& c = (CChild&)t;
