#include <iostream>

using namespace std;


const int number = 5;
template <typename T>
T max_number(const T * a);

int main()
{
    double double_number[5];
    int int_number[5];
    cout<<"请输入五个整数"<<endl;
    for (int j = 0; j < 5; j++)
    {
        cin>>int_number[j];
    }
    cout<<max_number(int_number)<<endl;

    cout<<"请输入五个小数"<<endl;
    for (int k = 0; k < 5; k++)
    {
        cin>>double_number[k];
    }
    cout<<max_number(double_number)<<endl;


    return 0;
}

template <typename T>
T max_number(const T * a)
{
    T temp = *a;
    for (int i = 1; i < 5; i++)
    {
        if (temp < *(a + i) )
        {
            temp = * (a + i);
        }
        else
        {
            temp = temp;
        }
    }
    return temp;
}
