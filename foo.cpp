#include <iostream>

class A {
public:
    void foo()
    {
        std::cout << "A\n";
    }
};

class B : public A {
public:
    B(int id)
    {
        this->id = id;
    }

    void foo()
    {
        std::cout << "B" << id << "\n";
    }
    int id;
};

class C : public A {
public:
    C(int id)
    {
        this->id = id;
    }

    void foo()
    {
        std::cout << "C" << id << "\n";
    }
    int id;
};

int main()
{
    A* b = new B(1);
    A* c = new C(2);

    static_cast<C*>(b)->foo();
    static_cast<C*>(c)->foo();

    // Вывод:
    // C1
    // C2
}