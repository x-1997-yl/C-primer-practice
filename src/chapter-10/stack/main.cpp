#include <iostream>
#include "stackc.h"

using namespace std;

int main()
{
    {
    int parameter;
    cout<<"��������Ҫ����ĸ�����С��10"<<endl;
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
