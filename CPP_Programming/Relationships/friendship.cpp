#include<Basic/inheritance_basic.h>

// There are three ways friendship can be defined.

// 1. Friend class
// 2. Friend member function
// 3. Friend global function

// A friend class can access private and protected members of other class
// in which it is friend.

// It is sometimes useful to allow a perticular class to access private
// members of other class.

// Friendship can't be mutual. If class A is a friend of B then B doen't
// become a friend of A automatically.

// Friendship can not be inherited.

class A
{
private:
    int a;
public:
    A()
    {
        a =0;
    }
    friend class B;
};

class B
{
private:
    int b;
public:
    void showA(A &x)
    {
        cout<<"A::a= " << x.a;
    }
};
