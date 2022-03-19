#include <iostream>

int main()
{
    using namespace std;
    int i;
    int j;
    float result;
    cout<<"请输入两个数，若有0则结束"<<endl;
    cin>>i;
    cin>>j;
    while ((i != 0) && (j != 0))
    {
       result = (2.0 * i * j) / (i + j);
        cout<<i<<","<<j<<"的算术平均值是"<<result<<endl;
        cin.get();
        cin>>i;
        cin>>j;
    }
    return 0;
}
