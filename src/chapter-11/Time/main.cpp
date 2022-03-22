#include <iostream>
#include "time.h"

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"请输入小时，分钟"<<endl;
    cin>>a;
    cin>>b;

    Time result;
    result.setHour(a);
    result.setMinute(b);

    Time second(1,50);
    Time total;
    total = result + second;

    total.show();

    return 0;
}
