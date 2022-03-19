#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    cout<<"ÇëÊäÈëĞĞÊı"<<endl;
    cin>>i;
    for (int j = 0; j < i; j++)
    {
        for (int m = 0; m < (i - j - 1); m++)
        {
            cout<<".";
        }
        for (int k = 0; k < j + 1; k++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
