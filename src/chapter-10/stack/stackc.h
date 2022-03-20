#ifndef STACKC_H_INCLUDED
#define STACKC_H_INCLUDED
#include <iostream>

using namespace std;

class stack
{
    int index;
    int list_one[10];
public:
    stack();
    int* add(int &a);
    void show(int *a);
    int * getvalue();
    bool isfull();
    bool isempty();
    ~stack();
};



#endif // STACKC_H_INCLUDED
