#include <iostream>
#include "stackc.h"
using namespace std;

stack::stack()
{
    index = 0;
}

void stack::show(int *b)
{
    for (int i = 0; i < index; i++)
    {
        cout<<b[i]<<endl;
    }
}

bool stack::isfull()
{
   if (index == 10)
   {
       cout<<"��"<<endl;
   }
   else
   {
       cout<<"����"<<endl;
   }
   return (index == 10)?true:false;
}

int * stack::getvalue()
{
    return list_one;
}
bool stack::isempty( )
{
   if (index == 0)
   {
       cout<<"��"<<endl;
   }
   else
   {
       cout<<"�ǿ�"<<endl;
   }
   return (index == 0)?true:false;
}

int* stack::add(int &a)
{
    for (int i = 0; i < a; i++)
    {
        cin>>list_one[i];
    }
    index = a;
    return list_one;
}


stack::~stack(){};
