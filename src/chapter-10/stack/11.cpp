#include<iostream>

using namespace std;

class A
{
    int a;

public:
    A(int c);
    friend void show(A T);
};

A::A(int c)
{
    a=c;
}

void show(A T)
{
    cout<<T.a;
}

int main()
{
    A a(5);
    show(a);
    return 0;
}
