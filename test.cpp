#include <iostream>
class A
{
public:
    A(int b){
        std::cout << "A()" << b << std::endl;
    }
};
class B : public A
{
public:
    B() : A(3)
    {
        std::cout << "B()" << std::endl;
    }
};
int main(int argc, char const *argv[])
{
    B b;
    return 0;
}
