#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    ifstream fin;
    int i = 0;
    fin.open("test.txt");
    char ch;
    fin>>ch;
    while (fin.good())
    {
        i++;
        fin>>ch;
    }
    if (fin.eof())
    {
        cout<<"Get the file end"<<endl;
    }
    cout<<"�ܹ���"<<i<<"���ַ�"<<endl;
    fin.close();
    return 0;
}
