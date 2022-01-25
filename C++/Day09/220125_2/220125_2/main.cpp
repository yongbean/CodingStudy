//
//  main.cpp
//  220125_2
//
//  Created by Yongbean Chung on 2022/01/25.
//

#include <iostream>
using namespace std;

class CParent {
public:
    void Func1() {
        m_Value = 1;
    }
    int m_Value;
};

class CTest: public CParent {
public:
    void Func1() {
        m_Value = 2;    // 자식 클래스가 부모 클래스로부터 받은 함수를 재정의
    }
    void Func2() {      // 새로 정의
        m_Value1 = 3;
    }
    int m_Value;        // 재정의
    int m_Value1;
};

int main(int argc, const char * argv[]) {
    CTest t;
    t.CParent::Func1();
    t.Func1();
    t.Func2();
    
    cout << t.CParent::m_Value << endl;
    cout << t.m_Value << endl;
    cout << t.m_Value1 << endl;
    return 0;
}
