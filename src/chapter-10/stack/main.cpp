#include <iostream>
#include "stackc.h"

using namespace std;

int main()
{
    {
    int parameter;
    cout<<"请输入想要输入的个数，小于10"<<endl;
    cin>>parameter;
    stack listarray;
    int *m;
    listarray.add(parameter);
    listarray.isfull();
    listarray.isempty();
    listarray.show(listarray.getvalue());
    }
    return 0;
}
