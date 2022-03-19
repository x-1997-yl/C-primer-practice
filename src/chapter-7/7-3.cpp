#include<iostream>

struct box
    {
        char make[40];
        float height;
        float width;
        float length;
        float volum;
    };
void showValue(box a);
void showPoniterValue(box * p);

int main()
{
    box mybox[2] ={{"Xie Yuliang",1,2,3,6},{"Li Xiang",2,2,4,16}};
    showValue(mybox[0]);
    showPoniterValue(&mybox[1]);
    return 0;
}

void showValue(box a)
{
    using namespace std;
    cout<<a.make<<","<<a.height<<","<<a.width<<","<<a.length<<","<<a.volum<<endl;
    return;
}

void showPoniterValue(box * p)
{
    using namespace std;
    cout<<p->make<<","<<p->height<<","<<p->width<<","<<p->length<<","<<p->volum<<endl;
    return;
}
