#include <iostream>

int main()
{
    using namespace std;
    int i;
    int j;
    float result;
    cout<<"������������������0�����"<<endl;
    cin>>i;
    cin>>j;
    while ((i != 0) && (j != 0))
    {
       result = (2.0 * i * j) / (i + j);
        cout<<i<<","<<j<<"������ƽ��ֵ��"<<result<<endl;
        cin.get();
        cin>>i;
        cin>>j;
    }
    return 0;
}
